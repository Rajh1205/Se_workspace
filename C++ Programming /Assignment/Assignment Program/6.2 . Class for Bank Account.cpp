#include<iostream>
using namespace std;

// BankAccount class definition
class BankAccount 
{
private:
    float balance;  // Private data member

public:
    // Constructor to initialize balance
    BankAccount(float initialBalance)
    {
        if(initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // Function to deposit amount
    void deposit(float amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
        } 
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw amount
    void withdraw(float amount) 
    {
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        } 
        else 
        {
            cout << "Invalid or insufficient balance!" << endl;
        }
    }

    // Function to display current balance
    void displayBalance()
    {
        cout << "Current balance: " << balance << endl;
    }
};

int main() 
{
    BankAccount account(1000);  // Create object with initial balance

    account.displayBalance();

    account.deposit(500);
    account.displayBalance();

    account.withdraw(200);
    account.displayBalance();

    account.withdraw(2000);  // Attempt to withdraw more than balance

    return 0;
}
