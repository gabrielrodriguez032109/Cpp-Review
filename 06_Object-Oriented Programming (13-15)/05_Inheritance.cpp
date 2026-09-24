/*
Study note:
This lesson introduces 05 Inheritance. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Inheritance lets one class reuse features from another class.
This helps create a hierarchy of related types.
This example shows a Dog class inheriting behavior from an Animal class.
*/
#include <iostream>

class Animal {
public:
    void speak() {
        // This line shows the result on the screen.
    std::cout << "Animal sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        std::cout << "Bark" << std::endl;
    }
};

int main() {
    Dog dog;
    dog.speak();
    return 0;
}
