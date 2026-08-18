/*
Study note:
This lesson introduces 05 Vector Methods. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Vector methods help you add items and check the size of the collection.
push_back adds a new value to the end of the vector.
This example shows how to build a vector step by step.
*/
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    // The vector grows as new values are added.
    numbers.push_back(10);
    numbers.push_back(20);

    // This line shows the result on the screen.
    std::cout << numbers.size() << std::endl;
    std::cout << numbers[1] << std::endl;
    return 0;
}
