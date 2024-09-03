// 27. Create a class Animal with virtual method makeSound(). Leave the method to be blank. Create two
// classes Dog and Cat inheriting Animal. Override the method makeSound() to display”Bark” and “Meow”
// in their respective classes. In main, create pointer of Animal , point to the object of Dog and call the
// method MakeSound(). Finally point to the object of Cat and call the makeSound() method.

#include <iostream>

class Animal {
public:
    virtual void makeSound() const = 0; 
};

class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Bark" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "Meow" << std::endl;
    }
};

int main() {
    Animal* animalPtr;

    Dog dog;
    animalPtr = &dog;
    animalPtr->makeSound();  // Calls Dog's makeSound() -> "Bark"

    Cat cat;
    animalPtr = &cat;
    animalPtr->makeSound();  // Calls Cat's makeSound() -> "Meow"

    return 0;
}
