/*
Study note:
This lesson introduces 01 Memory Addresses. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Every variable is stored somewhere in memory.
A memory address is the location where that value is kept.
The ampersand symbol gives us the address of a variable.
This example shows how to print the address of a variable.
*/
#include <iostream>

int main() {
    int age = 25;

    // The & operator gives the memory address of age.
    // This line shows the result on the screen.
    std::cout << &age << std::endl;
    return 0;
}
