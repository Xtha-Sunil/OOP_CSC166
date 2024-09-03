// 24. Create a class Animal with data members name, age, color, noOfLegs. Include a method getData() to
// input data of the class. Create a class Cat inheriting Animal. Also include showData() method in class Cat
// to show the data.

#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    int age;
    string color;
    int noOfLegs;

public:
    void getData() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // to ignore the newline character left in the buffer
        cout << "Enter color: ";
        getline(cin, color);
        cout << "Enter number of legs: ";
        cin >> noOfLegs;
        cin.ignore(); // ignores newline character left in the buffer
    }
};

class Cat : public Animal {
public:
    void showData() {
        cout << "Cat details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Color: " << color << endl;
        cout << "Number of legs: " << noOfLegs << endl;
    }
};

int main() {
    Cat myCat;

    myCat.getData();

    myCat.showData();

    return 0;
}
