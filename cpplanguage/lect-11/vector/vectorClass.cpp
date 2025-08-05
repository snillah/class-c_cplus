#include <iostream>
#include <vector>
using namespace std;

class BankAccount {
private:
    string name;
    double balance;

public:
    BankAccount(string n, double b) : name(n), balance(b) {}

    void deposit(double amount) {
        balance += amount;
        cout << name << " deposited Rs." << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << name << " withdrew Rs." << amount << endl;
        } else {
            cout << "Insufficient balance for " << name << endl;
        }
    }

    void showBalance() const {
        cout << name << "'s Balance: Rs." << balance << endl;
    }
};

int main() {
    vector<BankAccount> accounts;

    // Adding multiple accounts
    accounts.push_back(BankAccount("Alice", 5000));
    accounts.push_back(BankAccount("Bob", 8000));
    accounts.emplace_back("Charlie", 12000); //read the vectorClass.md file

    // Depositing to Bob's account
    accounts[1].deposit(2000);

    // Withdrawing from Charlie's account
    accounts[2].withdraw(3000);

    // Display all balances
    cout << "\n--- All Accounts ---\n";
    for (const auto &acc : accounts) {
        acc.showBalance();
    }

    return 0;
}


// Vector using Class using to store multiple accounts dynamically 

// Used vector<BankAccount> to store multiple accounts dynamically.

// push_back() adds objects to the vector.

// Accessed elements with accounts[index].

// Used a loop to show balances of all accounts.