#include <iostream> // for std::cout and std::cerr
#include <string> // for std::string

int main(int argc, char* argv[]) {
    // Check if there are enough arguments (program name + flag + value)
    if (argc < 2)
    {
        std::cerr << "Usage: " << argv[0] << " -w <week_number>\n";
        return 1; // return an error code
    }

    std::string flag = argv[1];

    // Check if the flag is -w
    if (flag =="-w") {
        std::string week_number = argv[2];
        std::cout << "Received week: " << week_number << "\n";
    } else {
        std::cerr << "Unknown flag: " << flag << "\n";
        return 1;
    }

    return 0;
}