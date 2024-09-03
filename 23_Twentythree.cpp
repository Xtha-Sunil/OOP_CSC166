// 23. Write a program using two classes Fahrenheit with data member f and Celsius with data member c.
// Overload the operator << and >> in both class to handle the input and output. Write the data conversion
// routine in Celsius class that converts the Fahrenheit into Celsius. Show your conversion result in main .
// [ formula: C =(F-32)*5/9]

#include <iostream>

using namespace std;

class Celsius;

class Fahrenheit {
    float f;

public:
    Fahrenheit(float f = 0) : f(f) {}

    friend istream& operator>>(istream& in, Fahrenheit& temp) {
        in >> temp.f;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Fahrenheit& temp) {
        out << temp.f << " F";
        return out;
    }

    Celsius toCelsius() const;
};

class Celsius {
    float c;

public:
    Celsius(float c = 0) : c(c) {}

    friend istream& operator>>(istream& in, Celsius& temp) {
        in >> temp.c;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Celsius& temp) {
        out << temp.c << " C";
        return out;
    }

    Fahrenheit toFahrenheit() const {
        return Fahrenheit((c * 9 / 5) + 32);
    }
};

Celsius Fahrenheit::toCelsius() const {
    return Celsius((f - 32) * 5 / 9);
}

int main() {
    Fahrenheit fTemp;
    Celsius cTemp;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fTemp;

    cTemp = fTemp.toCelsius();

    cout << "Fahrenheit: " << fTemp << endl;
    cout << "Converted to Celsius: " << cTemp << endl;

    cout << "\nEnter temperature in Celsius: ";
    cin >> cTemp;

    fTemp = cTemp.toFahrenheit();

    cout << "Celsius: " << cTemp << endl;
    cout << "Converted to Fahrenheit: " << fTemp << endl;

    return 0;
}
