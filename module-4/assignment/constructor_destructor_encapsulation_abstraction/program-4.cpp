/*
Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account. 
*/

#include<iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << " successfully. New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds. Withdrawal unsuccessful." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn " << amount << " successfully. New balance: " << balance << endl;
        }
    }
};

int main() {
    BankAccount myAccount(123456789, 500.0);

    myAccount.deposit(200.0);
    myAccount.withdraw(100.0);

    return 0;
}