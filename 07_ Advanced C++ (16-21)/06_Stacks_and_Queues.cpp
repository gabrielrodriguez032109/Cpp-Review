/*
Study note:
This lesson introduces 06 Stacks and Queues. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
A stack follows last-in, first-out order.
A queue follows first-in, first-out order.
These are common data structures in programming.
This example shows a tiny stack and queue in action.
*/
#include <iostream>
#include <stack>
#include <queue>

int main() {
    std::stack<int> numbers;
    std::queue<int> waiting;

    numbers.push(1);
    waiting.push(2);

    // This line shows the result on the screen.
    std::cout << numbers.top() << std::endl;
    std::cout << waiting.front() << std::endl;
    return 0;
}
