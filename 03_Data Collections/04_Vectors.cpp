/*
Study note:
This lesson introduces 04 Vectors. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
A vector is a flexible collection that can grow and shrink.
It is often easier to use than a fixed-size array.
This example shows how to create a vector and access its first element.
*/
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3};

    // This line shows the result on the screen.
    std::cout << numbers[0] << std::endl;
    return 0;
}
