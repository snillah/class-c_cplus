#include <iostream>
using namespace std;

// Abstract base class
class Payment {
public:
    virtual void makePayment(double amount) = 0; // Pure virtual function
    virtual void showReceipt() = 0;              // Pure virtual function
    virtual ~Payment() {}                        // Virtual destructor
};

// Derived class - Credit Card Payment
class CreditCardPayment : public Payment {
public:
    void makePayment(double amount) override {
        cout << "Paid Rs." << amount << " using Credit Card." << endl;
    }
    void showReceipt() override {
        cout << "Credit Card Payment Successful ✅" << endl;
    }
};

// Derived class - UPI Payment
class UpiPayment : public Payment {
public:
    void makePayment(double amount) override {
        cout << "Paid Rs." << amount << " using UPI." << endl;
    }
    void showReceipt() override {
        cout << "UPI Payment Successful ✅" << endl;
    }
};

int main() {
    Payment* p1 = new CreditCardPayment();
    Payment* p2 = new UpiPayment();

    p1->makePayment(1200.50);
    p1->showReceipt();

    p2->makePayment(750.00);
    p2->showReceipt();

    delete p1;
    delete p2;

    return 0;
}

// Explanation
// Payment is an abstract class with pure virtual functions.

// CreditCardPayment and UpiPayment provide their own implementations.

// The user only interacts with the Payment interface (not the actual implementation).

// This hides the complex details of payment processing → Abstraction.