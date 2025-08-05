#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder; // private → cannot access directly
    double balance;

public:
    // Constructor
    BankAccount(string name, double bal) {
        accountHolder = name;
        balance = bal;
    }

    // Getter (Read access)
    string getAccountHolder() const {
        return accountHolder;
    }

    double getBalance() const {
        return balance;
    }

    // Setter / Business Logic (Write access)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited Rs." << amount << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew Rs." << amount << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }
};

int main() {
    BankAccount account("Alice", 5000);

    // Can't do: account.balance = 1000; ❌ (private)
    cout << account.getAccountHolder() << "'s Balance: " 
         << account.getBalance() << endl;

    account.deposit(2000);
    account.withdraw(1000);

    cout << "Final Balance: " << account.getBalance() << endl;

    return 0;
}
