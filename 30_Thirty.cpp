// 30. Write a program showing the example of composition.

#include <iostream>

class Engine {
private:
    int horsepower;

public:
    Engine(int hp) : horsepower(hp) {}

    void start() const {
        std::cout << "Engine with " << horsepower << " horsepower started." << std::endl;
    }
};

class Car {
private:
    Engine engine;  // Composition: Car has an Engine
    std::string model;

public:
    Car(const std::string &mdl, int hp) : model(mdl), engine(hp) {}

    void start() const {
        std::cout << model << " is starting..." << std::endl;
        engine.start();
    }
};

int main() {
    Car myCar("Tesla Model S", 670);

    myCar.start();

    return 0;
}
