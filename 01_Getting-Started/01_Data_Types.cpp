/*
Data types tell C++ what kind of information a variable can store.
An int stores whole numbers, a double stores decimal numbers, a char stores one character, and a bool stores true or false.
Choosing the right data type helps the program work correctly and makes the code easier to understand.
This example shows the most common beginner-friendly data types.

Study note:
A data type is like a label that tells the compiler what kind of value is expected.
That makes the program safer and easier to reason about.

Beginner tip:
Use the smallest data type that fits your needs. For example, a bool is perfect for true/false values.

Special trick:
If you are unsure which type to use, think about the kind of information first: whole number, decimal, letter, or yes/no.
*/
#include <iostream>

int main() {
    // int stores whole numbers like 10 or 25.
    int age = 10;

    // double stores numbers with decimal points like 19.99.
    double price = 19.99;

    // char stores one single character like 'A'.
    char grade = 'A';

    // bool stores either true or false.
    bool student = true;

    std::cout << age << std::endl;
    std::cout << price << std::endl;
    std::cout << grade << std::endl;
    std::cout << student << std::endl;

    // Study note:
    // The compiler uses the data type to decide how memory is handled.
    return 0;
}
