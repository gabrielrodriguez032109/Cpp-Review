/*
Study note:
This lesson introduces 01 Exception Handling. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Exceptions are used to handle errors in a controlled way.
When something goes wrong, the program can throw an error and catch it.
This example shows a very simple exception being handled.
*/
#include <iostream>

int main() {
    try {
        throw 10;
    } catch (int error) {
        // This line shows the result on the screen.
    std::cout << "Caught error: " << error << std::endl;
    }

    return 0;
}
