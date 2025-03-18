using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using MyAppV2.API.Data;
using MyAppV2.API.Models;

namespace MyAppV2.API.Controllers
{
	[Route("api/[controller]")]
	[ApiController]
	[Authorize] // csak bejelentkezett felhasználók hívhatják meg
	public class PostsController : ControllerBase
	{
		private readonly AppDbContext _context;

		public PostsController(AppDbContext context)
		{
			_context = context;
		}

		// GET: api/posts
		[HttpGet]
		public IActionResult GetPosts()
		{
			var posts = _context.Posts.ToList();
			return Ok(posts);
		}

		// POST: api/posts
		[HttpPost]
		public IActionResult CreatePost([FromBody] Post post)
		{
			if (post == null)
				return BadRequest();

			post.CreatedAt = DateTime.UtcNow;

			_context.Posts.Add(post);
			_context.SaveChanges();

			return CreatedAtAction(nameof(GetPosts), new { id = post.Id }, post);
		}

		// GET: api/posts/5
		[HttpGet("{id}")]
		public IActionResult GetPostById(int id)
		{
			var post = _context.Posts.FirstOrDefault(p => p.Id == id);

			if (post == null)
				return NotFound();

			return Ok(post);
		}
	}
}