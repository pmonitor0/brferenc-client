using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using MyApp.Client;

var builder = WebAssemblyHostBuilder.CreateDefault(args);

builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

// HttpClient regisztrálása
builder.Services.AddScoped(sp => new HttpClient
{
	BaseAddress = new Uri("https://brferenc.com")
});

// HttpClientWrapper regisztrálása
builder.Services.AddScoped<HttpClientWrapper>();

await builder.Build().RunAsync();
