// Write a program which accepts days as integer and display total number of years, months and days in
// it. For example : if user input as 856 days the output should be 2 years 4 months 6 days

#include <iostream>
using namespace std;

class Date {
    int years, months, days;
    public:
    Date() {
        std::cout << "Enter the number of days : ";
        cin >> days;
        this->days = days;
    }

    void convert() {
        years = days / 365;
        days = days % 365;
        months = days / 30;
        days = days % 30;
    }
    
    void displayConverted() {
        cout << "Years : " << years << endl;
        cout << "Months : " << months << endl;
        cout << "Days : " << days << endl;
    }
};

int main() {
    Date today;
    today.convert();
    today.displayConverted();
    return 0;
}