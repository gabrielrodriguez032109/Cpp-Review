/*
Study note:
This lesson introduces 04 Dynamic Memory Allocation. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Dynamic memory allocation gives a program memory while it is running.
The new keyword requests memory from the computer.
This example shows how a variable can be created dynamically.
*/
#include <iostream>

int main() {
    // new creates memory for one integer and stores its address in score.
    int* score = new int(10);

    // This line shows the result on the screen.
    std::cout << *score << std::endl;

    // delete frees the memory once we are done with it.
    delete score;
    return 0;
}
