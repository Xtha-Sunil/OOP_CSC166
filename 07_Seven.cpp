// Write a program to input an integer and print its binary digits

#include <iostream>
#include <bitset>

using namespace std;

std::string intToBits(int number) {
    std::string binary = std::bitset<8>(number).to_string();
    return binary;
}

int main() {
    auto  number = 0;
    std::string result;
    cout << "Enter an integer : ";
    cin >> number;
    result = intToBits(number);
    cout << "Binary digits : " << result;
    return 0;
}