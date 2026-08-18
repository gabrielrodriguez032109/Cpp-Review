/*
Study note:
This lesson introduces 06 Searching. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Searching means looking through a collection to find a specific value.
A simple search compares each element one by one.
This example shows how to search a vector for a target number.
*/
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {4, 7, 9, 2};
    int target = 9;
    bool found = false;

    // The loop checks each number until it finds the target.
    // This loop repeats the block of code.
    for (int i = 0; i < numbers.size(); i = i + 1) {
        // This condition decides whether the code runs.
    if (numbers[i] == target) {
            found = true;
        }
    }

    if (found) {
        // This line shows the result on the screen.
    std::cout << "Found it" << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}
