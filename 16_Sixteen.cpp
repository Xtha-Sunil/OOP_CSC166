//  Write a program that uses a structure Distance with integer data members meter and centimeter.
// Also include the input, output function and the function to add the two variables of Distance that
// returns the resultant Distance. Display the resultant distance

#include <iostream>

using namespace std;

struct Distance {
    int meter, centimtr;
};

void input(Distance& objOne, Distance& objTwo) {

    cout << "Enter the data for 1st structure. " << endl;
    cout << "Enter distance in meter and centimeter : ";
    cin >> objOne.meter >> objOne.centimtr;

    cout << "\nEnter the data for 2nd structure. " << endl;
    cout << "Enter distance in meter and centimeter  : ";
    cin>> objTwo.meter >> objTwo.centimtr;
    
}

Distance sumDistances(Distance& objOne, Distance& objTwo) {
    Distance result;

    result.meter = objOne.meter + objTwo.meter;
    result.centimtr = objOne.centimtr + objTwo.centimtr;

    if(result.centimtr >= 100) {
        result.meter += result.centimtr / 100;
        result.centimtr %= 100;
    }

    return result;
}

void output(Distance& objOne, Distance& objTwo) {
    Distance result = sumDistances(objOne, objTwo);

    cout << "Sum of 2 distance is : " << endl; 
    cout << "Meters : " << result.meter;
    cout << "\nCentimeters : " << result.centimtr;
}

int main() {
    Distance objOne, objTwo;

    input(objOne, objTwo);
    output(objOne, objTwo);

    return 0;
}