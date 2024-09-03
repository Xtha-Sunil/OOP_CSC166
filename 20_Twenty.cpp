// Write a program to increment the object of class Time by a second. The class has data members
// hour, min and sec. You must overload ++ for pre  and post-increment. Display the value of time during
// and after increment

#include <iostream>

using namespace std;

class Time {
    int hour, minute, second;

public:
    Time(int hour, int minute, int second) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    Time& operator++() {
            second++;
            if (second >= 60) {
                second = 0;
                minute++;
                if (minute >= 60) {
                    minute = 0;
                    hour++;
                }
            }        
            return *this;
    }

    Time operator++(int) {
        Time result = *this;
        second++;
            if (second >= 60) {
                second = 0;
                minute++;
                if (minute >= 60) {
                    minute = 0;
                    hour++;
                }
            }
            return result;
        }

    void showData() {
        cout << "Hour : " << hour << endl; 
        cout << "Minute : " << minute << endl; 
        cout << "Second : " << second << endl; 
    }
};

int main() {
    Time past(2, 59, 59);
    cout << "Post Increment\n" ;
    (past++).showData();

    cout << "\nCurrent \n" ;
    past.showData();

    cout << "\nPre Increment\n" ;
    (++past).showData(); // pre
    return 0;
}