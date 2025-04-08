#include <iostream> // for std::cout and std::cerr
#include <string> // for std::string
#include <filesystem> // Required for creating directories
// #include <sstream> // for stringstream
// #include <iomanip> // for setw and setfill
#include <format> // c++20 required

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

        // Format back to 2-digit string (e.g., "03")
        // std::ostringstream oss;
        // oss << std::setw(2) << std::setfill('0') << week_int;
        // std::string week_number = oss.str();

        // Format with leading zero using std::format (C++20)
        std::string week_number = std::format(":02", week_int);
        std::string folder_name =  "week_" + week_number;

        if (!std::filesystem::exists(folder_name))  {
            std::filesystem::create_directory(folder_name);
            std::cout << "Created folder: " << folder_name << "\n";
        } else {
            std::cout << "Folder already exists: " << folder_name << "\n";
        }


    } else {
        std::cerr << "Unknown flag: " << flag << "\n";
        return 1;
    }

    return 0;
}