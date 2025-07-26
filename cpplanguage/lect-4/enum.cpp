#include <iostream>
using namespace std;

enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
enum gender {Male,Female};

int main() {
    Day today = Friday;

    if (today == Friday) {
        cout << "Weekend is near!" << endl;
    }
    cout << "Numeric value of Friday: " << today << endl;  // Outputs: 5

    gender g  = Female;

    switch(g){
        case Male :
        cout<<"Gender Male";
        break;
        case Female :
        cout<<"Gender Male";
        break;
        default:cout<<"Invalid";
        break;
    }



    return 0;
}

