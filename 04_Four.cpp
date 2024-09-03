// Write a program which accepts a character and display its ASCII value.
#include <iostream>
#include <string>
using namespace std;

void displayASCII(char word) {
    cout << (int)word;
}

int main () {
    char word;
    cout << "Enter a character to convert to ASCII value : ";

    std::cin >> word;
    displayASCII(word);

    return 0;
}