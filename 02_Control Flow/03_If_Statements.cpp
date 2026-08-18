/*
Study note:
This lesson introduces 03 If Statements. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
An if statement lets a program run code only when a condition is true.
This is one of the basic ways to make decisions in C++.
This example shows how a score can trigger one action.
*/
#include <iostream>

int main() {
    int score = 80;

    // If the score is greater than 70, the message is shown.
    // This condition decides whether the code runs.
    if (score > 70) {
        // This line shows the result on the screen.
    std::cout << "You passed." << std::endl;
    }

    return 0;
}
