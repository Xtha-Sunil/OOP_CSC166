// 21. Write a program that uses a class Distance with data member feet and inches and another class
// String with data member a character string. Overload operator + to add the two object of Distance type
// as well as to concatenate the two object of String. Show the output of adding Distance and
// concatenating strings.

#include <iostream>
#include <cstring>

using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int ft = 0, int in = 0) : feet(ft), inches(in) {
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
    }

    Distance operator+(const Distance& other) const {
        int totalInches = (feet * 12 + inches) + (other.feet * 12 + other.inches);
        return Distance(totalInches / 12, totalInches % 12);
    }

    friend ostream& operator<<(ostream& out, const Distance& d) {
        out << d.feet << " feet " << d.inches << " inches";
        return out;
    }
};

class String {
private:
    char* str;

public:
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    ~String() {
        delete[] str;
    }

    String operator+(const String& other) const {
        char* temp = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(temp, str);
        strcat(temp, other.str);
        String result(temp);
        delete[] temp;
        return result;
    }

    friend ostream& operator<<(ostream& out, const String& s) {
        out << s.str;
        return out;
    }
};

int main() {
    Distance d1(5, 9); // 5 feet 9 inches
    Distance d2(4, 7); // 4 feet 7 inches

    Distance d3 = d1 + d2;

    cout << "Distance 1: " << d1 << endl;
    cout << "Distance 2: " << d2 << endl;
    cout << "Sum of distances: " << d3 << endl;

    String s1("Hello, ");
    String s2("world!");

    String s3 = s1 + s2;

    cout << "String 1: " << s1 << endl;
    cout << "String 2: " << s2 << endl;
    cout << "Concatenated string: " << s3 << endl;

    return 0;
}
