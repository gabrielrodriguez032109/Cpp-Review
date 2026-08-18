/*
Study note:
This lesson introduces 02 Array Manipulation. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
You can change the values inside an array after it is created.
This is useful when you want to update data later in the program.
This example shows how to replace one item in an array.
*/
#include <iostream>

int main() {
    int numbers[3] = {10, 20, 30};

    // The value at index 1 is changed from 20 to 25.
    numbers[1] = 25;

    // This line shows the result on the screen.
    std::cout << numbers[1] << std::endl;
    return 0;
}
