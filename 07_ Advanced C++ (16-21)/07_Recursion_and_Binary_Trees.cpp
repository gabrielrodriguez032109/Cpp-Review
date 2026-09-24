/*
Study note:
This lesson introduces 07 Recursion and Binary Trees. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Recursion means a function calls itself to solve a smaller version of the same problem.
A binary tree is a data structure where each node has at most two children.
This example shows a small recursive function and a very simple tree node.
*/
#include <iostream>

int factorial(int n) {
    // This condition decides whether the code runs.
    if (n <= 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

struct Node {
    int value;
    Node* left;
    Node* right;
};

int main() {
    // This line shows the result on the screen.
    std::cout << factorial(4) << std::endl;

    Node root;
    root.value = 10;
    root.left = nullptr;
    root.right = nullptr;

    std::cout << root.value << std::endl;
    return 0;
}
