# POC_JS_CS_CPPCLI_STDCPP
This is a POC to show that using Visual Studio on Windows you can Debug JS, CS, C++/CLI, regular C++ using std:: all in same solution

A popular type of web app these days is a single page app where the JavaScript manages the DOM, instead of refreshing the entire page.
It is also fine to have separate pages, and some combination of separate pages and relatively heavy JavaScript/DOM interaction.

The JavaScript makes HTTP requests to a Web API backend, which here is implemented in C#.  Let's say there is some heavy crunching to do in native C++.  That native C++ code can reached easily by using a layer of C++/CLI which compiles to .NET assemblies that can be referenced by the C# layer.

Its possible to link libraries of native C++, either static or dynamic.  It would be interesting to see if that improves the performance of the native C++.

Visual Studio Installation Requirements:
-C++
-C++/CLI
-Asp.NET
-C#

Building:
Right click on solution and click Clean, then Rebuild.  Click restore nuget packages if needed.

Running/Testing
The HealthCheck.html page contains some javascript to test a sample function Values in the Web API. It returns two strings as sample data. Set thas the start page.
If prompted to install a https certificate for IIS Express, go ahead and click yes.

Press F12 in Windows browsers to bring up the web browser Developer tabs and chose console to see the test results when you force the browser to go to <localhost>:<port>/Api/Values

The HealthCheck.html page retrieves the sample data from the Web API three different ways, and uses jQuery to make the data visible to the user.  There are also examples of using the <style> tag to define styles.

Set a breakpoint anywhere. If you have only made changes to javascript then hit Ctrl-S to save them and simply refresh the browser page.  No need to rerun the solution.

I wrote it in Visual Studio 2019 so it is using the 142 build toolset, so if you have Visual Studio 2017 you will probably need to change the project properties of CppLayer.  First make sure All Configurations is selected instead of only Debug or only Release.

Then for General Configuration Properties check Platform Toolset.  If it says not installed then use the drop down to select 141 Toolset or one that you actually have installed.  Likewise with the Windows SDK Version.  Choose the most recent Windows SDK version you have or some version close to 10.


It should be possible to set breakpoints in all of the languages javascript, C#, C++/CLI, regular C++
