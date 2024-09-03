// 31. Create a class General with protected float data members rate and value. Also include virtual
// functions setRate(float), setValue() and displayValue(). The displayValue() prints value. The body of
// other methods are blank. Create a class Source inheriting General. This method sets the rate. Also
// include a operator function that returns the product of rate and value. Create another class Destination
// inheriting General. Include default constructor to initialize the data. Include the another constructor
// with parameter object of Source. This constructor sets data with object of source.
// Now create class Inch inheriting both Source and Destination. Overrides setValue to input value. Also
// create Feet class inheriting both Source and Destination. Overrides setValue to input value.
// Now create a standalone function convertUnit(Source&,Destination&). This will convert source to
// destination. Create another standalone function intoToFeet(). In this method create pointer of source
// Inch. Set value, set rate with 1/12. Create pointer of Destination. Call the convertUnit. Display the result.
// Similarly create a function feetToInch(). In main Display the menu 1. Inch to Feet, 2. Feet to Inch and 3.
// Exit and Do accordingly

#include <iostream>

class General {
protected:
    float rate;
    float value;

public:
    virtual void setRate(float r) {
        rate = r;
    }

    virtual void setValue(float v) {
        value = v;
    }

    float getRate() const {
        return rate;
    }

    float getValue() const {
        return value;
    }

    virtual void displayValue() const {
        std::cout << "Value: " << value << std::endl;
    }
};

class Source : public virtual General {
public:
    void setRate(float r) override {
        rate = r;
    }

    float operator*() const {
        return rate * value;
    }
};

class Destination : public virtual General {
public:
    Destination() {
        rate = 0;
        value = 0;
    }

    Destination(const Source& src) {
        rate = src.getRate();
        value = src.getValue();
    }
};

class Inch : public Source, public Destination {
public:
    void setValue(float v) override {
        value = v;
    }
};

class Feet : public Source, public Destination {
public:
    void setValue(float v) override {
        value = v;
    }
};

void convertUnit(Source& src, Destination& dest) {
    dest.setRate(src.getRate());
    dest.setValue(*src);  // Multiply rate and value using operator*
}

void inchToFeet() {
    Source* src = new Inch();
    float value;
    std::cout << "Enter value in inches: ";
    std::cin >> value;
    src->setValue(value);
    src->setRate(1.0 / 12);

    Destination* dest = new Feet();
    convertUnit(*src, *dest);
    
    std::cout << "Converted to feet: ";
    dest->displayValue();
    
    delete src;
    delete dest;
}

void feetToInch() {
    Source* src = new Feet();
    float value;
    std::cout << "Enter value in feet: ";
    std::cin >> value;
    src->setValue(value);
    src->setRate(12);

    Destination* dest = new Inch();
    convertUnit(*src, *dest);
    
    std::cout << "Converted to inches: ";
    dest->displayValue();
    
    delete src;
    delete dest;
}

int main() {
    int choice;

    do {
        std::cout << "Menu:\n1. Inch to Feet\n2. Feet to Inch\n3. Exit\n";
        std::cin >> choice;

        switch (choice) {
            case 1:
                inchToFeet();
                break;
            case 2:
                feetToInch();
                break;
            case 3:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
        }

    } while (choice != 3);

    return 0;
}