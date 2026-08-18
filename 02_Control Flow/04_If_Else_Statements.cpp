/*
Study note:
This lesson introduces 04 If Else Statements. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
An if/else statement gives the program two choices.
If the condition is true, one block of code runs.
If it is false, the other block runs.
This example shows one message for success and another for failure.
*/
#include <iostream>

int main() {
    int score = 60;

    // The condition is checked and one of two messages is printed.
    // This condition decides whether the code runs.
    if (score >= 70) {
        // This line shows the result on the screen.
    std::cout << "You passed." << std::endl;
    } else {
        std::cout << "You need more practice." << std::endl;
    }

    return 0;
}
