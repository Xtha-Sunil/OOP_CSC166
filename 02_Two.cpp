// Write a program that converts degrees Celsius (TC) to degree Fahrenheit (TF) 
// (Recall that TF = (9/5) TC + 32 )

#include <iostream>
using namespace std;

double convertCelciToFahren(double celcius) {
    return ( (9.0/5.0)* celcius + 32);
}

int main() {
    double celcius ;
    cout << "Enter value in celcius ";
    cin >> celcius;
    auto fahren = convertCelciToFahren(celcius);
    std::cout << celcius<< " celcius = "<< fahren << " fahrenheit" << std::endl;
    return 0;
}