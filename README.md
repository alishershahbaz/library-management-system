# Library Management System

A console-based C++ program for managing a collection of books with a linked
list. It supports displaying, inserting, removing, swapping, sorting, and
reversing books, as well as checking the collection status.

## Build and run

### Visual Studio Code on Windows

Open this project folder in VS Code, install the recommended C/C++ extension if
prompted, and press **Ctrl+F5**. This builds all project source files and opens
the program in a console window where you can enter menu choices.

### Build manually

With MinGW-w64 on Windows, run these commands in the project folder:

```powershell
$sources = Get-ChildItem -Filter *.cpp | ForEach-Object { $_.FullName }
g++ -std=c++11 $sources -o library.exe
if ($LASTEXITCODE -eq 0) { .\library.exe }
```

With a C++ compiler on Linux or macOS:

```sh
g++ -std=c++11 *.cpp -o library-management-system
./library-management-system
```

Choose an option from the menu to manage the collection. The program starts
with five sample books.
