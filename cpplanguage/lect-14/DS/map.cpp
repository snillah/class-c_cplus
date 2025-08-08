#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    m["Apple"] = 50;
    m["Banana"] = 30;

    for(auto p : m)
        cout << p.first << " -> " << p.second << endl;
}
