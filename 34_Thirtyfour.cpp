// 34. Write a program to read all text from a file and display in screen.

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("34_File.txt"); 
    if (!file) {
        std::cerr << "Unable to open file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();
    return 0;
}
