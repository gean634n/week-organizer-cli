#include <iostream> // for std::cout and std::cerr
#include <string> // for std::string
#include <filesystem> // Required for creating directories
// #include <sstream> // for stringstream
// #include <iomanip> // for setw and setfill
#include <format> // c++20 required
#include <fstream>
#include <vector>

int main(int argc, char* argv[]) {
    // Check if there are enough arguments (program name + flag + value)
    if (argc < 3)
    {
        std::cerr << "Usage: " << argv[0] << " -w <week_number>\n";
        return 1; // return an error code
    }

    std::string flag = argv[1];

    // Check if the flag is -w
    if (flag =="-w") {
        std::string input = argv[2];

        // Convert input to integer to remove leading zeros
        int week_int = std::stoi(input);

        // Format with leading zero using std::format (C++20)
        std::string week_number = std::format(":02", week_int);
        std::string folder_name =  "week_" + week_number;

        std::filesystem::path base_path(folder_name);

        if (!std::filesystem::exists(base_path))  {
            std::filesystem::create_directory(base_path);
            std::cout << "Created folder: " << base_path << "\n";
        } else {
            std::cout << "Folder already exists: " << base_path << "\n";
        }

         // List of files to create
        std::vector<std::string> files = {
            "insights.md",
            "insights.pt-br.md",
            "references.md",
            "references.pt-br.md",
            "study-plan.md"
        };

        // Create each file if it doesn't exist
        for (const auto& file_name : files) {
            std::filesystem::path file_path = base_path / file_name;
            if (!std::filesystem::exists(file_path)) {
                std::ofstream file(file_path); // Creates empty file
                file.close();
                std::cout << "Created file: " << file_path << "\n";
            } else {
                std::cout << "File already exists: " << file_path << "\n";
            }
        }
    } else {
        std::cerr << "Unknown flag: " << flag << "\n";
        return 1;
    }



    return 0;
}