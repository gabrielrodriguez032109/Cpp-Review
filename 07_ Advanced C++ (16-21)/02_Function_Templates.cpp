/*
Study note:
This lesson introduces 02 Function Templates. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Templates let you write code that works with different data types.
This makes functions more reusable.
This example shows a simple function template for adding two values.
*/
#include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // This line shows the result on the screen.
    std::cout << add(2, 3) << std::endl;
    return 0;
}
