/*
Study note:
This lesson introduces 02 Creating Custom Data Types. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
You can create your own names for existing types.
This can make code easier to read and understand.
This example uses a custom name for int.
*/
#include <iostream>

using Age = int;

int main() {
    Age years = 21;

    // This line shows the result on the screen.
    std::cout << years << std::endl;
    return 0;
}
