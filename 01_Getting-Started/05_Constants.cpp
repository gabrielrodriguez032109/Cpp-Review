/*
Constants are values that should not change while a program is running.
They are useful for fixed values such as pi, gravity, or limits.
The const keyword tells the compiler that the value is permanent.
This example uses a constant to calculate the area of a circle.

Study note:
A constant is useful when a value should stay fixed throughout the program.
This prevents accidental changes and makes your code easier to trust.

Beginner tip:
Use uppercase names for constants such as PI or MAX_SIZE. That makes them easy to spot.

Special trick:
Constants are often used in formulas and configuration values.
*/
#include <iostream>

int main() {
    // PI is a constant, so it cannot be changed later.
    const double PI = 3.14159;

    double radius = 4;
    double area = PI * radius * radius;

    std::cout << area << std::endl;

    // Study note:
    // If you try to change PI later, the compiler will stop you.
    return 0;
}
