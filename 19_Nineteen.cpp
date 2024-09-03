// 19. Write a program defining the class Distance with data member feet and inch as integer. Overload the
// constructors to input data. Also, define your own copy constructor. The class must have a method to
// show the data of object. Overload the addDistance() method that takes object by reference and address.
// The method returns the resultant object by reference and address. In main(), create one object using
// parameterized constructor and one using copy constructor and one using default constructor. Use
// addTime() to add first two objects and store the result in the third object. Display the result.

#include <iostream>

using namespace std;

class Distance {
    int feet, inch;

public:
    Distance() {
        feet = 0;
        inch = 0;
    }

    Distance(int feet, int inch) {
        this->feet = feet;
        this->inch = inch;
        if (inch >= 12) {
            feet += inch / 12;
            inch = inch % 12;
        }
    }

    Distance(const Distance& d) {
        feet = d.feet;
        inch = d.inch;
    }

    void showData() {
        cout << "Feet : " << feet << endl;
        cout << "Inches : " << inch << endl;
    }

    Distance addDistance(Distance& l) { 
        Distance result;
        result.inch = inch + l.inch;
        result.feet = feet + l.feet + (result.inch / 12);
        result.inch = result.inch % 12;
        return result;
    }

    Distance* addDistance(Distance* l) {
        Distance* result = new Distance;  
        result->inch = inch + l->inch;
        result->feet = feet + l->feet + (result->inch / 12);
        result->inch = result->inch % 12;
        return result;
    }

};

int main() {
    Distance d1(6, 9);  
    Distance d2(d1);    
    Distance d3;        

    d3 = d1.addDistance(d2);  
    Distance* d4 = d1.addDistance(&d2);

    cout << "Distance after addition by reference:" << endl;
    d3.showData();
    cout << "\nDistance after addition by address:" << endl;
    d4->showData();

    delete d4;
    return 0;
}
