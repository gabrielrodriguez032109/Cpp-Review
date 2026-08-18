/*
Study note:
This lesson introduces 06 While Loops. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
A while loop repeats code while a condition stays true.
It is useful when the number of repetitions is not known ahead of time.
This example prints numbers until the count reaches the limit.
*/
#include <iostream>

int main() {
    int count = 1;

    // The loop continues until the condition becomes false.
    // This loop repeats the block of code.
    while (count <= 3) {
        // This line shows the result on the screen.
    std::cout << count << std::endl;
        count = count + 1;
    }

    return 0;
}
