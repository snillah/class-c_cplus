#include <iostream>
using namespace std;

class general
{
private:
    /* data */
public:
    string name;
    void display(){
        cout<<"\nwelcome\t"<<name;
    }
};


int main(){
    int a,b,c;
    cout<<"Hwllo World!"<<endl;
    // cin>>a>>b;
    a=5,b=8;
    c = a+b;
    cout<<"Total :"<<c;
    // How to approach the class
    // create  a object like
    general obj1;
    obj1.name ="guru";
    obj1.display();
    // how to use Poiter object;
    general *obj2 = new general();// we have to use new keyword
    //we cannot use dot notation instead we have to use this "->"
    // obj2.name = //normal object store in stack memory but this is static memory
    obj2->name = "Guru priyan";//pointer object store in heap memory but this is dynamic
    obj2->display();
    return 0;
}
