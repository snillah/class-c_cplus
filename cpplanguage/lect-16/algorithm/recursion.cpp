// Recursive Factorial
#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0) // base case
        return 1;
    else
        return n * factorial(n - 1); // recursive case
}

int main() {
    int num =4;
    cout << "Enter a number: ",num;
    // cin >> num;

    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}

// How it works
// Base case:
// If n == 0, we return 1 (because 0!=1).

// Recursive case:
// 𝑛!=𝑛 × (𝑛−1)!

// The function calls itself with a smaller number until it hits the base case.