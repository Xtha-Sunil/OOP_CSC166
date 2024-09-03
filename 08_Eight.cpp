// Write a program to divide any number by some integer which is power of 2. 
// Division must be done using bitwise operator.

#include <iostream>

int divideByPowerOf2(int number, int power) {
    return number >> power;
}

int main() {
    int number, power;

    std::cout << "Enter the number to be divided: ";
    std::cin >> number;

    std::cout << "Enter the power of 2 to divide by : ";
    std::cin >> power;

    int result = divideByPowerOf2(number, power);

    std::cout << number << " divided by 2^" << power << " is " << result << std::endl;

    return 0;
}
