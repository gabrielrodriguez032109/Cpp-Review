/*
Study note:
This lesson introduces 10 Nested Conditionals. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Nested conditionals place one if statement inside another.
This lets the program make more detailed decisions.
This example checks whether a person is an adult and whether they have a ticket.
*/
#include <iostream>

int main() {
    int age = 17;
    bool hasTicket = true;

    // This condition decides whether the code runs.
    if (age >= 18) {
        if (hasTicket) {
            // This line shows the result on the screen.
    std::cout << "You can enter." << std::endl;
        } else {
            std::cout << "You need a ticket." << std::endl;
        }
    } else {
        std::cout << "You are too young." << std::endl;
    }

    return 0;
}
