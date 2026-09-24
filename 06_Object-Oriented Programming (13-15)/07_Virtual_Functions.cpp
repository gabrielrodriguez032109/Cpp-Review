/*
Study note:
This lesson introduces 07 Virtual Functions. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Virtual functions allow a base class method to be overridden by a derived class.
This makes the program behave differently depending on the object type.
This example shows the same function call producing different output for different objects.
*/
#include <iostream>

class Animal {
public:
    virtual void speak() {
        // This line shows the result on the screen.
    std::cout << "Animal sound" << std::endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        std::cout << "Meow" << std::endl;
    }
};

int main() {
    Animal* animal = new Cat();
    animal->speak();
    delete animal;
    return 0;
}
