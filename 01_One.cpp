// Write a C++ program to print the following output. You must use manipulators such as left, right,
// setw, endl for formatting, The population column is right aligned.
#include <iostream>
#include "iomanip"

int main() {
    using namespace std;
    cout << left << setw(7) << "Num " 
              << setw(15) << "City " 
              << setw(15) << "District" 
              << setw(15) << "Province" 
              << right << setw(10) << "Population" << endl;
    
    cout << "--------------------------------------------------------------" << endl;
    
    cout << left << setw(7) << "1" 
              << setw(15) << "Kathmandu" 
              << setw(15) << "Kathmandu" 
              << setw(15) << "Bagmati" 
              << right << setw(10) << "50000" << endl;

    cout << left << setw(7) << "2" 
              << setw(15) << "Pokhara" 
              << setw(15) << "Kaski" 
              << setw(15) << "Gandaki" 
              << right << setw(10) << "50000" << endl;

    cout << left << setw(7) << "3" 
              << setw(15) << "Butwal" 
              << setw(15) << "Rupandehi" 
              << setw(15) << "Lumbini" 
              << right << setw(10) << "100000" << endl;

    cout << left << setw(7) << "4" 
              << setw(15) << "Dharan" 
              << setw(15) << "Sunsari" 
              << setw(15) << "Madhesh" 
              << right << setw(10) << "80000" << endl;

    return 0;
}
