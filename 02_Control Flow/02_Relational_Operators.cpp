/*
Study note:
This lesson introduces 02 Relational Operators. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Relational operators compare two values.
They are used to check whether one value is greater than, less than, or equal to another.
These operators are often used in if statements.
This example shows how to compare an age to a minimum value.
*/
#include <iostream>

int main() {
    int age = 18;

    // The condition checks whether the person is old enough.
    // This condition decides whether the code runs.
    if (age >= 18) {
        // This line shows the result on the screen.
    std::cout << "You are old enough." << std::endl;
    }

    return 0;
}
