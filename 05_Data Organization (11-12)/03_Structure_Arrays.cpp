/*
Study note:
This lesson introduces 03 Structure Arrays. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
You can store many structures in an array.
This is helpful when you want to manage a list of similar records.
This example shows how to store student records in an array.
*/
#include <iostream>

struct Student {
    std::string name;
    int age;
};

int main() {
    Student students[2];
    students[0].name = "John";
    students[0].age = 20;

    // This line shows the result on the screen.
    std::cout << students[0].name << std::endl;
    return 0;
}
