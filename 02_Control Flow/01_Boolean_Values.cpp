/*
Study note:
This lesson introduces 01 Boolean Values. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Boolean values are used to represent true or false.
They are helpful when a program needs to make a decision.
A bool variable can only store one of these two values.
This example shows how a boolean can control whether code runs.
*/
#include <iostream>

int main() {
    bool isReady = true;

    // The if statement only runs when the condition is true.
    // This condition decides whether the code runs.
    if (isReady) {
        // This line shows the result on the screen.
    std::cout << "The program is ready." << std::endl;
    }

    return 0;
}
