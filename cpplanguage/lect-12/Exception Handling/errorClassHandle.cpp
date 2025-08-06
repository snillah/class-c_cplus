#include <iostream>
#include <exception>
using namespace std;

class BankException : public exception {
public:
    const char* what() const noexcept override {
        return "Bank transaction failed!";
    }
};

int main() {
    try {
        throw BankException();
    }
    catch (const BankException& e) {
        cout << "Exception: " << e.what() << endl;
    }
}
