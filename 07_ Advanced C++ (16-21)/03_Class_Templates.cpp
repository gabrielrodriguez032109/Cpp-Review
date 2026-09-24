/*
Study note:
This lesson introduces 03 Class Templates. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Class templates let you create reusable classes for different data types.
This can save time when writing similar code.
This example shows a template class that can store a value of any type.
*/
#include <iostream>

template <typename T>
class Box {
public:
    T value;
};

int main() {
    Box<int> box;
    box.value = 5;

    // This line shows the result on the screen.
    std::cout << box.value << std::endl;
    return 0;
}
