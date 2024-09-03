// Write a Program defining an inline function to compute the area of circle with radius as input

#include <iostream>
#define pi 3.141592654
using namespace std;

inline double computeArea(double radius) {
    return pi * radius* radius;
}

int main() {
    double radius;
    
    std::cout << "Enter the radius (in meters): ";
    std::cin >> radius;

    double area = computeArea(radius);
    std::cout << "Area : "  << area  << " squared meters."<< std::endl;
        
    return 0;
}