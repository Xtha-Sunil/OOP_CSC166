// 26. Create an class Classifier with a method classify(). Leave the body of classifier() blank. Create two
// classes DecisionTree and NeuralNetwork inheriting classify. These methods override the classify() to
// display “Classifying with DesicisionTree” and “Classifying with NeuralNetwork” within their respective
// class. Now, create pointer of Classifier. The pointer firstly points the object of DecisionTree and calls the
// classify() then it points to the object of NeuralNetwork and calls classify(). See the results.

#include <iostream>

class Classifier {
public:
    virtual void classify() const = 0;
};

class DecisionTree : public Classifier {
public:
    void classify() const override {
        std::cout << "Classifying with DecisionTree." << std::endl;
    }
};

class NeuralNetwork : public Classifier {
public:
    void classify() const override {
        std::cout << "Classifying with NeuralNetwork." << std::endl;
    }
};

int main() {
    Classifier* classifierPtr;

    DecisionTree decisionTree;
    classifierPtr = &decisionTree;
    classifierPtr->classify();
    NeuralNetwork neuralNetwork;
    classifierPtr = &neuralNetwork;
    classifierPtr->classify();

    return 0;
}
