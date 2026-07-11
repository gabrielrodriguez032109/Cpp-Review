/*
Namespaces are used to organize code and prevent name conflicts.
They allow multiple things with the same name to exist in different groups.
This helps keep programs easier to manage as they grow.

Study note:
A namespace is like a folder for names. It helps keep related things together.
This is especially useful when large programs use code from many places.

Beginner tip:
If two libraries define something with the same name, namespaces help avoid confusion.

Special trick:
The syntax first::x means "look for x inside the first namespace."
That little pattern is very important to remember.
*/
#include <iostream>

namespace first {
    int x = 10; // variable x is declared in the first namespace
}

namespace second {
    int x = 20; // variable x is declared in the second namespace
}

int main() {
    // This variable is created inside main and does not belong to either namespace.
    int x = 5; // default value

    std::cout << x << std::endl;
    std::cout << first::x << std::endl; // output the value of x in the first namespace
    std::cout << second::x << std::endl; // output the value of x in the second namespace

    // Study note:
    // Namespaces help make code clearer as projects grow larger.
    return 0;
}
