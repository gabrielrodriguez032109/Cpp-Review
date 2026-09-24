/*
Study note:
This lesson introduces 07 Advanced File Operations. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Appending means adding new text to the end of an existing file.
This is useful when you want to keep adding information.
This example shows how to add to a file without overwriting the old content.
*/
#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("notes.txt", std::ios::app);

    file << "More text" << std::endl;
    file.close();

    // This line shows the result on the screen.
    std::cout << "Appended" << std::endl;
    return 0;
}
