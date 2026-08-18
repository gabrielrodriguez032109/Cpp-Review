/*
Study note:
This lesson introduces 07 For Loops. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
A for loop is often used when you know how many times you want to repeat something.
The loop has three parts: the start, the condition, and the update.
This example prints numbers from 1 to 5.
*/
#include <iostream>

int main() {
    // The loop starts at 1 and increases until it reaches 5.
    // This loop repeats the block of code.
    for (int i = 1; i <= 5; i = i + 1) {
        // This line shows the result on the screen.
    std::cout << i << std::endl;
    }

    return 0;
}
