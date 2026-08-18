/*
Study note:
This lesson introduces 05 Switch Statements. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
A switch statement is useful when you want to compare one value against several possible cases.
It is often cleaner than writing many if statements.
This example shows how a number can be matched to a day name.
*/
#include <iostream>

int main() {
    int day = 2;

    // The switch checks the value of day and runs the matching case.
    // This switch compares one value against several cases.
    switch (day) {
        case 1:
            // This line shows the result on the screen.
    std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        default:
            std::cout << "Another day" << std::endl;
    }

    return 0;
}
