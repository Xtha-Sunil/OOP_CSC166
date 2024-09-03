//  Write a program to input x and print its equivalent y.

#include <iostream>
#include <math.h>
#define e 2.718282

using namespace std;

double functionOne(double x) {
    return (pow(x, 2) + sqrt(x));
}

double functionTwo(double x) {
    return (1 - pow(e, x));
}

double functionThree(double x) {
    return abs(x + 5);
}

int main() {
    double x {0}; 
    cout << "Enter the value for x : ";
    std::cin >> x;

    if (x >= 0) {
        cout << functionOne(x) << endl;
    }
    else if (x > -10 && x < 0) {
        cout << functionTwo(x) << endl;
    }
    else if (x <= -10) {
        cout << functionThree(x) << endl;
    }

    return 0;
}