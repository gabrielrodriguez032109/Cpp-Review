/*
Study note:
This lesson introduces 08 Formatted Output. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Formatted output makes program results easier to read.
The std::setw and std::setfill manipulators help align values in columns.
This example shows how to print a neat table of numbers.
*/
#include <iostream>
#include <iomanip>

int main() {
    // This line shows the result on the screen.
    std::cout << std::setw(10) << "Name" << std::setw(10) << "Score" << std::endl;
    std::cout << std::setw(10) << "Ana" << std::setw(10) << 95 << std::endl;
    std::cout << std::setw(10) << "Ben" << std::setw(10) << 88 << std::endl;

    return 0;
}
