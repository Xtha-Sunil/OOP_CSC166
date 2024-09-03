// 25. Create a class Polygon with data members side1, side2, and side3. Also include the methods
// getArea() and getPerimeter(). Leave the body of these methods blank. Create a class Rectangle
// inheriting Polygon. Include a method to input side1 and side2 of the rectangle. Now override methods
// getArea() and getRectangle() to return area and perimeter of rectangle. Do same thing for class triangle.
// Now create the objects of Rectangle and Triangle and display their area and perimeter.

#include <iostream>
#include<cmath>

class Polygon {
protected:
    double side1, side2, side3;  // Data members for sides

public:
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
};

class Rectangle : public Polygon {
public:
    void setSides(double s1, double s2) {
        side1 = s1;
        side2 = s2;
        side3 = 0;  // side3 is not used in Rectangle
    }

    double getArea() const override {
        return side1 * side2;  // Area of rectangle
    }

    double getPerimeter() const override {
        return 2 * (side1 + side2);  // Perimeter of rectangle
    }
};

class Triangle : public Polygon {
public:
    void setSides(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    double getArea() const override {
        double s = getPerimeter() / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double getPerimeter() const override {
        return side1 + side2 + side3;  // Perimeter of triangle
    }
};

int main() {
    Rectangle rect;
    rect.setSides(5.0, 3.0);

    std::cout << "Rectangle Area: " << rect.getArea() << std::endl;
    std::cout << "Rectangle Perimeter: " << rect.getPerimeter() << std::endl;

    Triangle tri;
    tri.setSides(3.0, 4.0, 5.0);

    std::cout << "Triangle Area: " << tri.getArea() << std::endl;
    std::cout << "Triangle Perimeter: " << tri.getPerimeter() << std::endl;

    return 0;
}
