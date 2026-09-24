/*
Study note:
This lesson introduces 06 Writing Files. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Writing to a file stores information so it can be used later.
This example saves a short note to a file.
It demonstrates the basic idea of file output.
*/
#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("notes.txt");

    file << "This is a note" << std::endl;
    file.close();

    // This line shows the result on the screen.
    std::cout << "Done" << std::endl;
    return 0;
}
