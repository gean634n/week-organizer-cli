# Week Organizer CLI

A simple command-line tool to create weekly folders and files to organize study routines or projects. Built in C++ as a learning project.

## 🚀 Features

- Create a folder for a given week number (with leading zero): `week-01`, `week-02`, etc.
- Inside the folder, the following files are created (if they don't already exist):

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
g++ main.cpp -o organizer
```
Run:
```bash
./organizer -w <week_number>
```

This creates:
```
week-03/
├── insights.md
├── insights.pt-br.md
├── references.md
├── references.pt-br.md
└── study-plan.md
```

## 🎯 Learning Goals
- Practice with std::filesystem

- Handle command-line arguments (argc, argv)

- Work with file streams (std::ofstream)

- Use user input (std::cin)

- Implement basic CLI interface

## 📚 Requirements
- C++17 or newer

- A C++ compiler like g++ or clang++

Feel free to fork, experiment, and suggest improvements as this tool evolves!