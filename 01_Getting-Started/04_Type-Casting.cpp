/*
Type casting is used when you want to change one data type into another.
This is helpful when you want to do math with different kinds of values.
In C++, static_cast is a common way to convert a value safely.
This example shows how casting can make division behave more like a decimal calculation.

Study note:
Casting does not change the original value permanently. It creates a temporary version
of the value in a different type for the current expression.

Beginner tip:
If you see a result that seems too short or rounded, check whether you are mixing integer
and floating-point values.

Special trick:
Casting is often useful before division. Without casting, integer division can throw away the decimal part.
*/
#include <iostream>

int main() {
    int score = 5;

    // The score is converted to a double before division.
    double average = static_cast<double>(score) / 2;

    std::cout << average << std::endl;

    // Study note:
    // If you remove the cast, the result may become a different kind of value.
    return 0;
}
