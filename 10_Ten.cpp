// We are given the same window in Qno. 9. We represent points in 2D space with 4 bits. 
// If point is above the top boundary, then its third bit is 1 otherwise 0.
// If point is below the bottom boundary, then its 2nd bit is 1 otherwise 0.
// If the point is right side of the right boundary, then 1st bit is 1 otherwise 0.
// If point is left of left boundary then 0th bit is 1 otherwise 0.
// Write a program to input a point, compute its code and display it. You must use bitwise operators

#include <iostream>
#include <bitset>

using namespace std;

struct Point {
    int x, y;
};

int checkPoint(Point p) {
    Point leftBottom = {100, 100};
    Point rightTop = {400, 500};
    int bitCode = 0;

    if (p.y > rightTop.y) {
        bitCode |= (1 << 3); // Set the 3rd bit
    }
    if (p.y < leftBottom.y) {
        bitCode |= (1 << 2); // Set the 2nd bit
    }
    if (p.x > rightTop.x) {
        bitCode |= (1 << 1); // Set the 1st bit
    }
    if (p.x < leftBottom.x) {
        bitCode |= 1; // Set the 0th bit
    }

    return bitCode;
}

int main() {
    Point p;
    cout << "Input a coordinate (x y): ";
    cin >> p.x >> p.y;
    
    int result = checkPoint(p);
    cout << "The computed code is: " << std::bitset<4>(result).to_string() << endl;
    return 0;
}
