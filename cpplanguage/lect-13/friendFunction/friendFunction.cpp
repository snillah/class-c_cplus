#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) : length(l) {}

    // Friend function declaration
    friend void showLength(Box b);
};

// Definition
void showLength(Box b) {
    cout << "Length of box: " << b.length << endl;  // Can access private data
}

int main() {
    Box b1(10);
    showLength(b1);  // Output: Length of box: 10
    return 0;
}
