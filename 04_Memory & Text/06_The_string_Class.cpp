/*
Study note:
This lesson introduces 06 The string Class. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
The string class is a modern way to work with text in C++.
It is easier and safer to use than a C-string for most beginner programs.
This example shows how to store and print a string.
*/
#include <iostream>
#include <string>

int main() {
    std::string name = "John";

    // This line shows the result on the screen.
    std::cout << name << std::endl;
    return 0;
}
