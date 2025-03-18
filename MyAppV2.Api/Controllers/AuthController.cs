using Microsoft.AspNetCore.Mvc;
using Microsoft.IdentityModel.Tokens;
using System.IdentityModel.Tokens.Jwt;
using System.Security.Claims;
using System.Text;
using MyAppV2.API.Data;
using MyAppV2.API.Models;
using Microsoft.Extensions.Configuration;
//using MyAppV2.API.Models;

[ApiController]
[Route("api/[controller]")]
public class AuthController : ControllerBase
{
	private readonly IConfiguration _config;
	private readonly AppDbContext _context;
	private static List<RefreshToken> _refreshTokens = new();
	private readonly IConfiguration _configuration;


	public AuthController(AppDbContext context, IConfiguration configuration)
	{
		_context = context;
		_configuration = configuration;
	}
	/*
	public AuthController(IConfiguration configuration, AppDbContext context)
	{
		_configuration = configuration;
		_context = context;
	}
	*/

	[HttpPost("login")]
	public IActionResult Login([FromBody] LoginRequest request)
	{
		var user = _context.Users.SingleOrDefault(u => u.Username == request.Username);

		if (user == null || user.PasswordHash != request.Password)
			return Unauthorized("Hibás felhasználónév vagy jelszó!");

		var accessToken = GenerateJwtToken(user.Username);
		var refreshToken = GenerateRefreshToken(user.Username);

		// Mentjük a refresh tokent adatbázisba
		_context.RefreshTokens.Add(refreshToken);
		_context.SaveChanges();

		return Ok(new
		{
			AccessToken = accessToken,
			RefreshToken = refreshToken.Token
		});
	}

	[HttpPost("refresh")]
	public IActionResult Refresh([FromBody] RefreshRequest request)
	{
		var refreshToken = _context.RefreshTokens.SingleOrDefault(rt => rt.Token == request.RefreshToken);

		if (refreshToken == null || refreshToken.IsRevoked || refreshToken.Expires < DateTime.UtcNow)
			return Unauthorized("Érvénytelen vagy lejárt refresh token!");

		// Invalidate old refresh token (opcionális, ha egyszer használatos)
		refreshToken.IsRevoked = true;

		// Generate new tokens
		var newAccessToken = GenerateJwtToken(refreshToken.Username);
		var newRefreshToken = GenerateRefreshToken(refreshToken.Username);

		_context.RefreshTokens.Add(newRefreshToken);
		_context.SaveChanges();

		return Ok(new
		{
			AccessToken = newAccessToken,
			RefreshToken = newRefreshToken.Token
		});
	}

	private string GenerateJwtToken(string username)
	{
		var jwtSettings = _configuration.GetSection("Jwt");
		var key = new SymmetricSecurityKey(Encoding.UTF8.GetBytes(jwtSettings["Key"]!));
		var creds = new SigningCredentials(key, SecurityAlgorithms.HmacSha256);

		var expires = DateTime.UtcNow.AddMinutes(15);

		var token = new JwtSecurityToken(
			issuer: jwtSettings["Issuer"],
			audience: jwtSettings["Audience"],
			claims: new[] { new Claim(ClaimTypes.Name, username) },
			expires: expires,
			signingCredentials: creds
		);

		return new JwtSecurityTokenHandler().WriteToken(token);
	}

	private RefreshToken GenerateRefreshToken(string username)
	{
		return new RefreshToken
		{
			Token = Guid.NewGuid().ToString(),
			Username = username,
			Expires = DateTime.UtcNow.AddDays(7)
		};
	}
}

public class LoginRequest { public string Username { get; set; } = ""; public string Password { get; set; } = ""; }
public class RefreshRequest { public string RefreshToken { get; set; } = ""; }
//public class RefreshToken { public string Username { get; set; } = ""; public string Token { get; set; } = ""; public DateTime Expires { get; set; } }