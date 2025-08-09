// Methods to Generate Fibonacci
// A. Recursive Approach (Direct Formula)
// What is Fibonacci?
// The Fibonacci sequence is:

// What is the Fibonacci ?
// The Fibonacci series is a special sequence of numbers where:

// The first term is 0

// The second term is 1

// Every term after that is the sum of the previous two terms


// F(0) = 0
// F(1) = 1
// F(n) = F(n-1) + F(n-2) for n ≥ 2

// n:   0  1  2  3  4  5  6  7  8  9
// F(n):0, 1, 1, 2, 3, 5, 8, 13, 21, 34

// Recursive Approach (Direct Formula)

// #include <iostream>
// using namespace std;

// int fib(int n) {
//     if (n <= 1)
//         return n; // Base case
//     return fib(n - 1) + fib(n - 2);
// }

// int main() {
//     int n = 10;
//     for (int i = 0; i < n; i++)
//         cout << fib(i) << " ";
//     return 0;
// }


// Pros: Easy to understand
// Cons: Exponential time → O(2^n) (very slow for large n)


// Iterative Approach (Efficient)
#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int n = 10;
    fibonacci(n);
    return 0;
}

// Pros: O(n) time, O(1) space
// Cons: Just basic, not reusable for queries

// Key points:

// It grows quickly because each number is built from the last two.

// It’s used in DSA for recursion, dynamic programming, and in nature patterns like flower petals, shells, etc.

// Time complexity depends on the method:

// Recursive: O(2^n) (slow)

// Iterative / DP: O(n) (fast)

// If you want, I can also make a visual diagram of how the Fibonacci series builds itself step by step.

// Optimization Problems
// Appears in search algorithms like Fibonacci Search (used in sorted arrays).

// Helps in data structure layouts like Fibonacci Heaps (used in shortest path algorithms)

// Real-life Applications
// Nature patterns: flower petals, pinecones, sunflower spirals, seashells, etc.

// Biology: reproduction rates in populations (like rabbits in the original Fibonacci problem).

// Computer Graphics: Golden ratio-based spiral shapes.

// Music: rhythms and scales sometimes follow Fibonacci intervals.