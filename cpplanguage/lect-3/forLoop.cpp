#include <iostream>

using namespace std;

int main(){
    int num = 2001;
    int original = 0,reverse= 0,digit = 0;
    for(int i=num;num>1;i++){
        digit = num%10;
        
        reverse = reverse * 10 + digit;
        num = num/10;
        
        cout<<"reverse \t"<<reverse<<endl;
    }
    cout<<"reverse \t"<<reverse<<endl;
}