using Microsoft.AspNetCore.Components;
using Microsoft.JSInterop;
using System.Net.Http.Headers;
using System.Net.Http.Json;
using System.Text.Json;

namespace MyAppV2.Client.Services
{
	public class HttpClientWrapper
	{
		private readonly HttpClient _http;
		private readonly IJSRuntime _js;
		private readonly NavigationManager _nav;

		public HttpClientWrapper(HttpClient http, IJSRuntime js, NavigationManager nav)
		{
			_http = http;
			_js = js;
			_nav = nav;
		}

		public async Task<HttpResponseMessage> GetAsync(string url)
		{
			var token = await _js.InvokeAsync<string>("localStorage.getItem", "accessToken");

			if (string.IsNullOrEmpty(token))
			{
				_nav.NavigateTo("/login");
				return new HttpResponseMessage(System.Net.HttpStatusCode.Unauthorized);
			}

			_http.DefaultRequestHeaders.Authorization = new AuthenticationHeaderValue("Bearer", token);

			var response = await _http.GetAsync(url);

			if (response.StatusCode == System.Net.HttpStatusCode.Unauthorized)
			{
				var refreshed = await RefreshToken();
				if (!refreshed)
				{
					_nav.NavigateTo("/login");
					return response;
				}

				token = await _js.InvokeAsync<string>("localStorage.getItem", "accessToken");
				_http.DefaultRequestHeaders.Authorization = new AuthenticationHeaderValue("Bearer", token);

				response = await _http.GetAsync(url);
			}

			return response;
		}

		private async Task<bool> RefreshToken()
		{
			var refreshToken = await _js.InvokeAsync<string>("localStorage.getItem", "refreshToken");

			if (string.IsNullOrEmpty(refreshToken))
				return false;

			var result = await _http.PostAsJsonAsync("api/Auth/refresh", new { RefreshToken = refreshToken });

			if (!result.IsSuccessStatusCode)
				return false;

			var tokens = await result.Content.ReadFromJsonAsync<TokenResponse>();

			if (tokens is not null)
			{
				await _js.InvokeVoidAsync("localStorage.setItem", "accessToken", tokens.AccessToken);
				await _js.InvokeVoidAsync("localStorage.setItem", "refreshToken", tokens.RefreshToken);
				return true;
			}

			return false;
		}

		public class TokenResponse
		{
			public string AccessToken { get; set; } = "";
			public string RefreshToken { get; set; } = "";
		}
	}
}