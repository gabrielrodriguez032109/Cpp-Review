/*
This lesson introduces the first C++ program.
A C++ program starts running at the main function.
The code inside main executes from top to bottom, and std::cout is used to display text on the screen.
This example is meant to help a beginner see how a simple program is written.

Study note:
Every C++ program needs a main function. Think of main as the starting point,
where the program begins running.

Beginner tip:
When you see std::cout, read it as "send output to the screen."
That is one of the most important tools in early C++ learning.

Special trick:
Try changing the text inside the quotation marks. The program will still work,
but the output will change. This is a great way to learn how strings behave.
*/
#include <iostream> 

int main() {
    // std::cout prints text to the terminal.
    std::cout << "Hello, World!" << std::endl;

    // This line prints another message so the output is easy to read.
    std::cout << "This is a C++ program." << std::endl;

    // Return 0 means the program finished successfully.
    return 0;
}
