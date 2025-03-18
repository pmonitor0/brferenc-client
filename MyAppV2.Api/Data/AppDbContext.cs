/*using Microsoft.EntityFrameworkCore;
using MyAppV2.Api.Models;

namespace MyAppV2.API.Data;

public class AppDbContext : DbContext
{
	public AppDbContext(DbContextOptions<AppDbContext> options) : base(options) { }



	public DbSet<User> Users => Set<User>();
	public DbSet<Post> Posts => Set<Post>();
}
*/

using Microsoft.EntityFrameworkCore;
using MyAppV2.API.Models; // ha máshol van a User/Post modellek

namespace MyAppV2.API.Data
{
	public class AppDbContext : DbContext
	{
		public AppDbContext(DbContextOptions<AppDbContext> options)
			: base(options)
		{
		}

		public DbSet<RefreshToken> RefreshTokens { get; set; }



		public DbSet<User> Users { get; set; }
		public DbSet<Post> Posts { get; set; }
	}
	/*
	public class RefreshRequest
	{
		public string RefreshToken { get; set; } = "";
	}
	*/
}