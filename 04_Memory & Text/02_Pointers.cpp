/*
Study note:
This lesson introduces 02 Pointers. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
A pointer stores the memory address of another variable.
It lets us access data indirectly.
This example shows how a pointer can be used to read the value stored in another variable.
*/
#include <iostream>

int main() {
    int age = 25;
    int* ptr = &age;

    // The * operator reads the value that the pointer points to.
    // This line shows the result on the screen.
    std::cout << *ptr << std::endl;
    return 0;
}
