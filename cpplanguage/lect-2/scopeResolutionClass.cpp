#include <iostream>
using namespace std;

class ArthicmaticOperation
{
private:
    /* data */
public:
    int a,b,c;
    void add(){
        c=a+b;
        cout<<"\nSum :\t"<<c;
    }
    void sub();
};

void ArthicmaticOperation :: sub(){
        c=a-b;
        cout<<"\nDifference :\t"<<c;
    }
int main(){

    ArthicmaticOperation obj;
    obj.a =5;
    obj.b =10;
    obj.add();
    obj.sub();
}