/*
Operators are symbols that tell C++ what kind of action to perform.
They appear in almost every program, so learning them early makes everything easier.
This lesson focuses on arithmetic operators: +, -, *, and /.

What you should notice:
- The + operator adds values.
- The - operator subtracts values.
- The * operator multiplies values.
- The / operator divides values.

Why this matters:
Programs are built from small operations like these. Once you understand operators,
you can start building expressions, calculations, and more advanced logic.

Beginner tip:
Always keep the operator signs clear. A small mistake like using * instead of +
can change the whole result.

Special trick:
When you are learning, try to predict the answer before running the program.
This helps you notice when something is wrong.
*/
#include <iostream>

int main() {
    int a = 10;
    int b = 3;

    // Addition: combines two numbers into one larger value.
    std::cout << a + b << std::endl;

    // Subtraction: finds the difference between two values.
    std::cout << a - b << std::endl;

    // Multiplication: repeats a value a certain number of times.
    std::cout << a * b << std::endl;

    // Division: splits one value into equal parts.
    // Note: with integers, division may not show a decimal result.
    std::cout << a / b << std::endl;

    // Study note:
    // If you want to see decimal results, you may need to use a double or cast the values.

    return 0;
}
