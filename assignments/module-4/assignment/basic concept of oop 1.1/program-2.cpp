/*
Define a class to represent a bank account. Include the following members: 
Data Member: 
-Name of the depositor 
-Account Number 
-Type of Account 
-Balance amount in the account
*/

#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(string name, int accNum, string accType, double initialBalance) 
    {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    // Method to display account information
    void displayAccountInfo() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Create a BankAccount object and display the account information
    BankAccount myAccount("mansi", 123456789, "Savings", 1000.0);
    myAccount.displayAccountInfo();

    return 0;
}