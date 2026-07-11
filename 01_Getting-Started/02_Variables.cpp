/*
Variables are used to store information in a program.
A variable has a name and a value, and that value can be changed while the program is running.
This is useful when you want to store information, update it, and use it later in the program.
This example shows how to create a variable and use it in a calculation.

Study note:
A variable is like a labeled box. You put information into the box and then use the label
later to retrieve it.

Beginner tip:
Choose meaningful variable names such as score, age, or total. Avoid names like a and b
unless you are writing a very small example.

Special trick:
You can change a variable after it is created. This makes variables very flexible.
*/
#include <iostream>

int main() {
    // x and y are variables that store numbers.
    int x = 5; 
    int y = 20; 

    // sum stores the result of adding x and y.
    int sum = x + y;

    // These lines print the values so you can see what the program is doing.
    std::cout << "the value of x and y is: " << x << " and " << y << std::endl;
    std::cout << "the sum of x and y is: " << sum << std::endl;

    // Study note:
    // Variables are one of the most important ideas in programming.
    return 0;
}
