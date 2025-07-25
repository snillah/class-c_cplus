#include <iostream>
using namespace std;

int main() {
    int number, reversed = 0, maxDigit = 0;

    number = 12435;
    
    int original = number;

    while (number > 0) {
        int digit = number % 10;      // Get last digit
        reversed = reversed * 10 + digit; // Build reversed number

        if (digit > maxDigit) {
            maxDigit = digit;         // Update max digit
        }

        number = number / 10;         // Remove last digit
    }

    cout << "Original Number: " << original << endl;
    cout << "Reversed Number: " << reversed << endl;
    cout << "Maximum Digit: " << maxDigit << endl;

    return 0;
}