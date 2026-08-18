/*
Study note:
This lesson introduces 09 Logical Operators. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Logical operators let you combine conditions.
The && operator means AND, || means OR, and ! means NOT.
These operators are useful when a program needs to check more than one condition at once.
*/
#include <iostream>

int main() {
    int age = 20;
    bool hasID = true;

    // This condition decides whether the code runs.
    if (age >= 18 && hasID) {
        // This line shows the result on the screen.
    std::cout << "You may enter." << std::endl;
    } else {
        std::cout << "You may not enter." << std::endl;
    }

    return 0;
}
