/*
Study note:
This lesson introduces 07 Sorting. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Sorting puts items in order, such as from smallest to largest.
This example uses a simple sorting method called bubble sort.
It repeats comparisons until the values are arranged correctly.
*/
#include <iostream>

int main() {
    int numbers[5] = {5, 2, 4, 1, 3};

    // The nested loops compare values and swap them when needed.
    // This loop repeats the block of code.
    for (int i = 0; i < 4; i = i + 1) {
        for (int j = i + 1; j < 5; j = j + 1) {
            // This condition decides whether the code runs.
    if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // This line shows the result on the screen.
    std::cout << numbers[0] << std::endl;
    std::cout << numbers[4] << std::endl;
    return 0;
}
