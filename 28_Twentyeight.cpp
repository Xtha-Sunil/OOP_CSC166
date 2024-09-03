// 28. create a class Writer with pure virtual function write. Create classes Pen and Pencil inheriting writer.
// Create a standalone function writingKit with reference of Writer. Use this function to write with Pen or
// Pencil.

#include <iostream>

class Writer {
public:
    virtual void write() const = 0;
};

class Pen : public Writer {
public:
    void write() const override {
        std::cout << "Writing with a Pen." << std::endl;
    }
};

class Pencil : public Writer {
public:
    void write() const override {
        std::cout << "Writing with a Pencil." << std::endl;
    }
};

void writingKit(const Writer &writer) {
    writer.write();
}

int main() {
    Pen myPen;
    Pencil myPencil;

    writingKit(myPen);

    writingKit(myPencil);

    return 0;
}
