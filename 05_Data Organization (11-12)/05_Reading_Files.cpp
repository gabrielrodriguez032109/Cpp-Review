/*
Study note:
This lesson introduces 05 Reading Files. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Reading from a file means getting information that was saved earlier.
The program opens the file and reads its contents.
This example shows how to read one line from a file.
*/
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("data.txt");
    std::string line;

    // This condition decides whether the code runs.
    if (file.is_open()) {
        std::getline(file, line);
        // This line shows the result on the screen.
    std::cout << line << std::endl;
    }

    return 0;
}
