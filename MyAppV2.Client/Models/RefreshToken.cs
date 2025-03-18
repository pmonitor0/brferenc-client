﻿namespace MyAppV2.API.Models
{
	public class RefreshToken
	{
		public int Id { get; set; }
		public string Token { get; set; } = string.Empty;
		public string Username { get; set; } = string.Empty;
		public DateTime Expires { get; set; }
		public bool IsRevoked { get; set; } = false;
	}
}