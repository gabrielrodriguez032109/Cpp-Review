/*
Study note:
This lesson introduces 03 Multi Dimensional Arrays. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
A multi-dimensional array stores data in rows and columns.
This is useful for tables or grids.
This example shows a simple 2D array with two rows and two columns.
*/
#include <iostream>

int main() {
    int grid[2][2] = {{1, 2}, {3, 4}};

    // This accesses the value in the second row and first column.
    // This line shows the result on the screen.
    std::cout << grid[1][0] << std::endl;
    return 0;
}
