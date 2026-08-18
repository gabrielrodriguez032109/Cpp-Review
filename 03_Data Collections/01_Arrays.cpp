/*
Study note:
This lesson introduces 01 Arrays. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
An array is used to store multiple values in one place.
Each value is stored at an index, and the first index starts at 0.
This is useful when a program needs to work with many related values.
This example shows how to create a small array and access its elements.
*/
#include <iostream>

int main() {
    int numbers[3] = {1, 2, 3};

    // The first element is at index 0 and the last element is at index 2.
    // This line shows the result on the screen.
    std::cout << numbers[0] << std::endl;
    std::cout << numbers[2] << std::endl;
    return 0;
}
