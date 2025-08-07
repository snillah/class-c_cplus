#include <iostream>
using namespace std;

void testFunction(int type) {
    if (type == 1)
        throw 100; // int exception
    else if (type == 2)
        throw "Something went wrong"; // const char* exception
    else
        throw runtime_error("Runtime error occurred"); // standard exception
}

int main() {
    for (int i = 1; i <= 3; i++) {
        try {
            testFunction(i);
        }
        catch (int e) {
            cout << "Caught integer exception: " << e << endl;
        }
        catch (const char* msg) {
            cout << "Caught message: " << msg << endl;
        }
        catch (...) {  // catch-all handler
            cout << "Caught an unknown exception!" << endl;
        }
    }
    return 0;
}


// Explanation
// First exception → handled by catch(int)

// Second exception → handled by catch(const char*)

// Third (runtime_error) → no matching handler → catch-all executes