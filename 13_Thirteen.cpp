// Write a program to input a string and print the string and its reverse. 
// Define your own function to reverse the string

#include <iostream>
#include <string>

using namespace std;

void stringReverse(std::string myStr) {
    cout << "Reversed : ";
    for(int i = myStr.length(); i>= 0; i--) {
        std::cout << myStr[i-1];
    }
}

int main() {
    std::string myStr;
    cout << "Enter string to reverse : ";
    std::getline(cin, myStr);

    stringReverse(myStr);
    return 0;
}