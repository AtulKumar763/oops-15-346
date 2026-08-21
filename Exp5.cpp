#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    // Data hiding
    int accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(int number, string name, double initialBalance) {
        accountNumber = number;
        accountHolder = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Rs. " << amount << " deposited successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount.\n";
        }
        else if (amount > balance) {
            cout << "Insufficient balance.\n";
        }
        else {
            balance -= amount;
            cout << "Rs. " << amount << " withdrawn successfully.\n";
        }
    }

    void display() const {
        cout << "\n--- Account Details ---\n";
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Balance        : Rs. " << balance << endl;
    }
};

int main() {
    BankAccount account(1001, "Rahul Kumar", 5000);

    account.display();

    account.deposit(2000);
    account.display();

    account.withdraw(1500);
    account.display();

    account.withdraw(10000);

    return 0;
}