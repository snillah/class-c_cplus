#include <iostream>
using namespace std;

// Interface (abstract class)
class PaymentInterface {
public:
    virtual void makePayment(double amount) = 0; // Pure virtual
    virtual void showReceipt() = 0;              // Pure virtual
    virtual ~PaymentInterface() {}               // Virtual destructor
};

// Class implementing the interface
class CreditCardPayment : public PaymentInterface {
public:
    void makePayment(double amount) override {
        // balance = balance - amount;
        cout << "Paid Rs." << amount << " using Credit Card." << endl;
    }
    void showReceipt() override {
        cout << "Credit Card Payment Successful ✅" << endl;
    }
};

class UpiPayment : public PaymentInterface {
    public:
    void makePayment(double amount) override {
        // balance = balance - amount;
        cout << "Paid Rs." << amount << " using UPI." << endl;
    }
    void showReceipt() override {
        cout << "UPI Payment Successful ✅" << endl;
    }
};

int main() {

    PaymentInterface* payment1 = new CreditCardPayment();
    PaymentInterface* payment2 = new UpiPayment();

    payment1->makePayment(1500);
    payment1->showReceipt();

    payment2->makePayment(700);
    payment2->showReceipt();


    delete payment1;
    delete payment2;

    return 0;
}
