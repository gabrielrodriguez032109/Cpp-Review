/*
Study note:
This lesson introduces 04 Member Functions. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Member functions belong to a class and define its behavior.
They help objects do actions.
This example shows how a circle object can calculate its own area.
*/
#include <iostream>

class Circle {
public:
    double radius;

    double getArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle circle;
    circle.radius = 3;

    // This line shows the result on the screen.
    std::cout << circle.getArea() << std::endl;
    return 0;
}
