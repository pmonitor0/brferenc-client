using MyAppV2.API.Models;

namespace MyAppV2.API.Data
{
	public static class DbInitializer
	{
		public static void Initialize(AppDbContext context)
		{
			context.Database.EnsureCreated(); // vagy context.Database.Migrate();

			// Ha nincs user, létrehozunk egy admint
			if (!context.Users.Any())
			{
				var admin = new User
				{
					Username = "admin",
					PasswordHash = "password" // Teszt jelszó (hash kellene élesben!)
				};

				context.Users.Add(admin);
				context.SaveChanges();
			}

			// Ha nincs post, teszt adatokat töltünk be
			if (!context.Posts.Any())
			{
				var posts = new[]
				{
					new Post { Title = "Első poszt", Content = "Ez az első poszt tartalma", CreatedAt = DateTime.UtcNow },
					new Post { Title = "Második poszt", Content = "Ez a második poszt tartalma", CreatedAt = DateTime.UtcNow }
				};
				Console.WriteLine("Létrehoztam a teszt adatokat!!!");
				context.Posts.AddRange(posts);
				context.SaveChanges();
			}
		}
	}
}