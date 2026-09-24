/*
Study note:
This lesson introduces 03 Encapsulation. The idea may look small at first, but it is a building block
for larger programs and more advanced problem solving.

Beginner tip:
Read the code slowly and try to predict what will happen before you run it.
This helps you understand the logic instead of only memorizing syntax.

Special trick:
Change one value and run the program again. Small experiments make concepts much easier to remember.
*/

/*
Encapsulation means keeping data protected inside a class.
The public functions provide controlled access to that data.
This example shows how a bank account can protect its balance while allowing safe updates.
*/
#include <iostream>

class BankAccount {
private:
    int balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(int amount) {
        balance = balance + amount;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;
    account.deposit(50);

    // This line shows the result on the screen.
    std::cout << account.getBalance() << std::endl;
    return 0;
}
