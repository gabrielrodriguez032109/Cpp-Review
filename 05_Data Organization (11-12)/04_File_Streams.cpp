/*
Study note:
This lesson introduces 04 File Streams. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
File streams let a program read from and write to files.
This example writes a small message to a file.
It is a simple introduction to saving data outside the program.
*/
#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("data.txt");
    file << "Hello from C++";
    file.close();

    // This line shows the result on the screen.
    std::cout << "File written" << std::endl;
    return 0;
}
