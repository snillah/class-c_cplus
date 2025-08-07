#include <iostream>
#include <stdexcept>
using namespace std;

class BankAccount {
private:
    string name;
    double balance;

public:
    BankAccount(string accName, double initialBalance) {
        if (initialBalance < 0) {
            throw invalid_argument("Initial balance cannot be negative!");
        }
        name = accName;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            throw invalid_argument("Deposit amount must be positive!");
        }
        balance += amount;
        cout << "Deposited Rs." << amount << " successfully.\n";
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            throw invalid_argument("Withdrawal amount must be positive!");
        }
        if (amount > balance) {
            throw runtime_error("Insufficient balance!");
        }
        balance -= amount;
        cout << "Withdrawn Rs." << amount << " successfully.\n";
    }

    void showBalance() const {
        cout << "Account holder: " << name << ", Balance: Rs." << balance << endl;
    }
};

int main() {
    try {
        BankAccount myAccount("Guru", 10000);

        myAccount.showBalance();

        myAccount.deposit(3000);
        myAccount.withdraw(2000);
        myAccount.withdraw(20000);  // This will throw an exception

        myAccount.showBalance();
    }
    catch (const invalid_argument& e) {
        cout << "Invalid input error: " << e.what() << endl;
    }
    catch (const runtime_error& e) {
        cout << "Runtime error: " << e.what() << endl;
    }
    catch (...) {
        cout << "Some unknown error occurred." << endl;
    }

    return 0;
}

// Features Covered:
// Encapsulation (data and methods inside class)

// Exception Handling:

// invalid_argument

// runtime_error

// catch(...) catch-all

// Real-world logic for deposit/withdraw

// Validation of user inputs