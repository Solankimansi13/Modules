/*
 Define a class to represent a bank account. Include the following members: 
3. Data Member: -Name of the depositor -Account Number -Type of Account -Balance amount in the account 
 
Member Functions -To assign values
 -To deposited an amount 
 -To withdraw an amount after checking balance 
 -To display name and balance
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
    BankAccount(string name, int accNum, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    // Method to deposit an amount
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << " successfully. New balance: $" << balance << endl;
    }

    // Method to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds. Withdrawal unsuccessful." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn $" << amount << " successfully. New balance: $" << balance << endl;
        }
    }

    // Method to display name and balance
    void displayAccountInfo() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Create a BankAccount object and demonstrate deposit, withdrawal, and display functionality
    BankAccount myAccount("mansi", 987654321, "Checking", 5000.0);
    myAccount.displayAccountInfo();

    myAccount.deposit(1000.0);
    myAccount.withdraw(2000.0);

    myAccount.displayAccountInfo();

    return 0;
}