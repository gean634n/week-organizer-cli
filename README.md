# Week Organizer CLI

A simple command-line tool to create weekly folders and files to organize study routines or projects. Built in C++ as a learning project.

## 🚀 Features

- Create a folder named `week_<number>`
- Inside the folder:
  - `reading.txt` file
  - `exercises/` and `codes/` subfolders

## 📦 Project Status

This project is in its early stage. The goal is to progressively enhance it while learning modern C++ and command-line interaction.

### ✅ Next steps

- [x] Basic CLI with command-line arguments
- [ ] Interactive CLI with user input (`cin`)
- [ ] File selection menu (e.g., `[✓] insights`, `[ ] study-plan`)
- [ ] Custom folder/file templates
- [ ] Optional overwrite protection

## 🧪 Usage

Compile:

```bash
g++ organizer.cpp -o organizer
```
Run:
```bash
./organizer 03
```

This creates:
```
week_03/
├── reading.txt
├── exercises/
└── codes/
```

## 🎯 Learning Goals
- Practice with std::filesystem

- Handle command-line arguments (argc, argv)

- Work with file streams (std::ofstream)

- Use user input (std::cin)

- Implement basic CLI interface

## 📚 Requirements
- C++20 or newer

- A C++ compiler like g++ or clang++

Feel free to fork, experiment, and suggest improvements as this tool evolves!