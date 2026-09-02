/*
Study note:
This lesson introduces 03 Pointer Operations. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Pointer arithmetic means moving a pointer to other memory locations.
This can be useful when working with arrays.
This example shows how moving a pointer changes which value is accessed.
*/
#include <iostream>

int main() {
    int values[3] = {10, 20, 30};
    int* ptr = values;

    // This line shows the result on the screen.
    std::cout << *ptr << std::endl;
    // Moving the pointer forward gives the next value in the array.
    ptr = ptr + 1;
    std::cout << *ptr << std::endl;
    return 0;
}
