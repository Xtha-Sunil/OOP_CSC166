// 33. Write a program using class template to implement the stack with different data members
// integers/characters.

#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> elements;

public:
    void push(T value) {
        elements.push_back(value);
    }

    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        } else {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
        }
    }

    T top() const {
        if (!elements.empty()) {
            return elements.back();
        } else {
            throw std::out_of_range("Stack is empty");
        }
    }

    bool isEmpty() const {
        return elements.empty();
    }

    int size() const {
        return elements.size();
    }
};

int main() {
    Stack<int> intStack;  // Stack of integers
    Stack<char> charStack;  // Stack of characters

    intStack.push(10);
    intStack.push(20);
    std::cout << "Top element in intStack: " << intStack.top() << std::endl;
    intStack.pop();
    std::cout << "Top element after pop: " << intStack.top() << std::endl;

    charStack.push('A');
    charStack.push('B');
    std::cout << "\nTop element in charStack: " << charStack.top() << std::endl;
    charStack.pop();
    std::cout << "Top element after pop: " << charStack.top() << std::endl;

    return 0;
}
