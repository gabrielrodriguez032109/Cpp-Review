/*
Study note:
This lesson introduces 05 Linked Lists. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
A linked list stores data as a chain of nodes.
Each node points to the next node in the list.
This example shows the very beginning of a linked list structure.
*/
#include <iostream>

struct Node {
    int value;
    Node* next;
};

int main() {
    Node first;
    first.value = 10;
    first.next = nullptr;

    // This line shows the result on the screen.
    std::cout << first.value << std::endl;
    return 0;
}
