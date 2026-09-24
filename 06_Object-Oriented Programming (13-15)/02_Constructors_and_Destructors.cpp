/*
Study note:
This lesson introduces 02 Constructors and Destructors. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
A constructor runs when an object is created.
It can be used to set up the object automatically.
This example shows a constructor printing a message when the object is created.
*/
#include <iostream>

class Car {
public:
    Car() {
        // This line shows the result on the screen.
    std::cout << "Car created" << std::endl;
    }
};

int main() {
    Car myCar;
    return 0;
}
