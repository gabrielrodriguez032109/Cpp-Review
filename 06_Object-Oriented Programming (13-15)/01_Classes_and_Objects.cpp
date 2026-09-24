/*
Study note:
This lesson introduces 01 Classes and Objects. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
A class is a blueprint for creating objects.
An object is a real instance of that class.
This example creates a simple class for a car and gives it a color.
*/
#include <iostream>

class Car {
public:
    std::string color;
};

int main() {
    Car myCar;
    myCar.color = "red";

    // This line shows the result on the screen.
    std::cout << myCar.color << std::endl;
    return 0;
}
