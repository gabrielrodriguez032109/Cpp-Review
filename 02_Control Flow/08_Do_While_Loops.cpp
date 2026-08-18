/*
Study note:
This lesson introduces 08 Do While Loops. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
A do-while loop runs the block of code at least once before checking the condition.
This is useful when you want to guarantee that the code runs first.
This example prints a message until the user enters a valid choice.
*/
#include <iostream>

int main() {
    int number = 0;

    do {
        // This line shows the result on the screen.
    std::cout << "Enter a positive number: ";
        // This line reads input from the user.
    std::cin >> number;
    } // This loop repeats the block of code.
    while (number <= 0);

    std::cout << "You entered: " << number << std::endl;
    return 0;
}
