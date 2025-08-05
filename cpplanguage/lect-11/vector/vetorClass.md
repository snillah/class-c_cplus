```cpp

#include <iostream>
#include<vector>
using namespace std;

class BankAccount{
    private:
        string name;
        double balance;
    public:
        BankAccount(string n,double b):name(n),balance(b){}
        void deposit (double dAmount){
            balance += dAmount;
            cout<<name<<"Deposit Rs."<<dAmount<<endl;
        }
        void withdeaw(double wAmount){
            if(wAmount <= balance){
                balance -= wAmount;
                cout << name << " withdrew Rs." << amount << endl;
                } else {
                 cout << "Insufficient balance for " << name << endl;
                }
        }
        void showBalance() const {
        cout << name << "'s Balance: Rs." << balance << endl;
    }
};

int main(){
    vector<BankAccount> accounts;

    // Adding muliple account
    accounts.push_back(BankAccount("Alice",5000));

    accounts[0].deposit(2000);

    for(const auto &acc: accounts){
        acc.showBalance();
    }
}




```
is creating a temporary BankAccount object and then adding (copying/moving) it into the vector.

Eg:
# Why We Write BankAccount("Alice", 5000)
# BankAccount is the class constructor call.

# "Alice" and 5000 are arguments passed to the constructor.

# It creates a temporary object like:

```cpp
BankAccount temp("Alice", 5000);   // temporary object
accounts.push_back(temp);          // adds it to vector
```
But instead of making a separate variable, we inline it.

```cpp
accounts.push_back(BankAccount("Alice", 5000));        // adds it to vector

It will store like this
BankAccount alice("Alice", 5000);  // create object
accounts.push_back(alice);         // add to vector

```
# Alternative (C++11+): emplace_back

Instead of creating a temporary object, you can construct it directly in the vector, which is faster:

```cpp

accounts.emplace_back("Alice", 5000);
accounts.emplace_back("Bob", 8000);

```
# emplace_back forwards the arguments to the BankAccount constructor.

# Avoids creating an extra temporary object.


