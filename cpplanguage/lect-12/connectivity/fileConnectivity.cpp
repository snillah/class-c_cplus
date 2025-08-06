#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("data.txt");
    out << "Account Holder: Alice, Balance: 5000\n";
    out.close();

    ifstream in("data.txt");
    string line;
    while (getline(in, line)) {
        cout << line << endl;
    }
    in.close();

    return 0;
}
