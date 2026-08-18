/*
Input and output are how a program communicates with the user.
std::cout is used to display information, and std::cin is used to read input from the keyboard.
These tools are very important for interactive programs.
This example shows how to ask the user for input and print it back.

Study note:
Programs are much more useful when they can talk to the user.
Input lets the user provide information, and output shows the result.

Beginner tip:
Use prompts such as "Enter your age:" so the user knows what to type.

Special trick:
Always think about the order of input and output. If you print too early or too late,
it can confuse the user.
*/
#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";

    // The user types a number, and it is stored in age.
    std::cin >> age;

    std::cout << "You are " << age << " years old." << std::endl;

    // Study note:
    // This is the start of building interactive programs.
    return 0;
}
