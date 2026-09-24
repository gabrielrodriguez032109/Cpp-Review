/*
Study note:
This lesson introduces 01 Structures. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
A structure lets you group related data together.
This is useful when you want to describe something with multiple pieces of information.
This example shows how to create a simple structure for a student.
*/
#include <iostream>

struct Student {
    std::string name;
    int age;
};

int main() {
    Student student;
    student.name = "John";
    student.age = 20;

    // This line shows the result on the screen.
    std::cout << student.name << std::endl;
    return 0;
}
