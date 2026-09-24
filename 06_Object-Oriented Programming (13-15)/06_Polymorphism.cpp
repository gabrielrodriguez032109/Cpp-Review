/*
Study note:
This lesson introduces 06 Polymorphism. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Polymorphism lets different objects use the same interface in different ways.
This example uses a virtual function so the correct behavior is selected at runtime.
*/
#include <iostream>

class Animal {
public:
    virtual void speak() {
        // This line shows the result on the screen.
    std::cout << "Animal sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        std::cout << "Bark" << std::endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->speak();
    delete animal;
    return 0;
}
