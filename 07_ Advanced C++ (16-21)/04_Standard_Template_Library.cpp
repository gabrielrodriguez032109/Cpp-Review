/*
Study note:
This lesson introduces 04 Standard Template Library. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
The Standard Template Library provides ready-made tools for common tasks.
Vectors are one of the most useful STL containers.
This example introduces the vector container from the STL.
*/
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3};

    // This line shows the result on the screen.
    std::cout << numbers.size() << std::endl;
    return 0;
}
