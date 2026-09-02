/*
Study note:
This lesson introduces 05 C Strings. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
A C-string is an array of characters that ends with a null character.
It is one of the older ways to store text in C and C++.
This example shows how a small string can be stored in a character array.
*/
#include <iostream>

int main() {
    char name[] = "John";

    // This line shows the result on the screen.
    std::cout << name << std::endl;
    return 0;
}
