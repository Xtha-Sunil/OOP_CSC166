// Create a class Rectangle with private data members length and breadth. Encapsulate getter and
// setter. Also include methods such as getArea(), getPerimeter(). In main function, create a rectangle and
// display its area and perimeter.

#include <iostream>

using namespace std;

class Rectangle {
private:
    double length, breadth;

public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    Rectangle(double length, double breadth) {
        this->length = length;
        this->breadth = breadth;
    }

    double getLength() {
        return length;
    }

    void setLength(double length) {
        this->length = length;
    }

    double getBreadth() {
        return breadth;
    }

    void setBreadth(double breadth) {
        this->breadth = breadth;
    }

    double getArea() {
        return length * breadth;
    }

    double getPerimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    Rectangle rect(6.0, 9.0);

    cout << "Length : " << rect.getLength() << endl;
    cout << "Length : " << rect.getBreadth() << endl;
    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() << "\n" << endl;

    rect.setBreadth(7.00);
    rect.setLength(3.00);
    cout << "Length : " << rect.getLength() << endl;
    cout << "Length : " << rect.getBreadth() << endl;
    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() << endl;

    return 0;
}
