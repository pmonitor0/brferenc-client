using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using MyAppV2.Client;
using MyAppV2.Client.Services;
using System.Net.Http.Headers;

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

// HttpClient + wrapper
builder.Services.AddScoped(sp =>
{
	var httpClient = new HttpClient
	{
		BaseAddress = new Uri("https://localhost:7024") // <- API URL
	};

	return httpClient;
});

// HttpClientWrapper (refresh token kezeléshez)
builder.Services.AddScoped<HttpClientWrapper>();

await builder.Build().RunAsync();