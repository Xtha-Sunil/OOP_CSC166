// 18. Create a class Time with private integer data members hour, minute, second. Include public methods
// to read and display data of the objects. Overload the friend function addTime() to pass the object of
// Time by value and address. One overloaded addTime() returns the resultant object by value and another
// by address.

#include <iostream>

using namespace std;

class Time {
    int hour, minute, second;

public:
    Time() : hour(0), minute(0), second(0) {}

    Time(int hour, int minute, int second) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    void readTime() {
        cout << "\nEnter the hour: ";
        cin >> hour;
        cout << "Enter the minute: ";
        cin >> minute;
        cout << "Enter the second: ";
        cin >> second;
    }

    void displayTime() const {
        cout << "Hour: " << hour << endl;
        cout << "Minute: " << minute << endl;
        cout << "Second: " << second << endl;
    }

    friend Time addTime(const Time& tOne, const Time& tTwo);
    friend Time* addTime(const Time* tOne, const Time* tTwo);
};

Time addTime(const Time& tOne, const Time& tTwo) {
    Time result;
    result.second = tOne.second + tTwo.second;
    result.minute = tOne.minute + tTwo.minute + result.second / 60;
    result.hour = tOne.hour + tTwo.hour + result.minute / 60;
    result.second %= 60;
    result.minute %= 60;
    return result;
}

Time* addTime(const Time* tOne, const Time* tTwo) {
    Time* result = new Time;
    result->second = tOne->second + tTwo->second;
    result->minute = tOne->minute + tTwo->minute + result->second / 60;
    result->hour = tOne->hour + tTwo->hour + result->minute / 60;
    result->second %= 60;
    result->minute %= 60;
    return result;
}

int main() {
    Time tOne, tTwo, tThree;
    tOne.readTime();
    tTwo.readTime();
    
    tThree = addTime(tOne, tTwo); 
    cout << "\nResult of addTime by value:" << endl;
    tThree.displayTime();
    
    Time* tFour = addTime(&tOne, &tTwo); 
    cout << "\nResult of addTime by address:" << endl;
    tFour->displayTime();
    
    delete[] tFour; 

    return 0;
}
