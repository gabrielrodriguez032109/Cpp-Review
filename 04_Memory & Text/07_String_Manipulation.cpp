/*
Study note:
This lesson introduces 07 String Manipulation. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
String manipulation means changing or combining text.
You can check the length of a string and join two strings together.
This example shows how to use string size and concatenation.
*/
#include <iostream>
#include <string>

int main() {
    std::string message = "Hello";

    // This line shows the result on the screen.
    std::cout << message.size() << std::endl;
    std::cout << message + " World" << std::endl;
    return 0;
}
