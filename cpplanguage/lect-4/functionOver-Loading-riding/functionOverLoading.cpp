#include <iostream>
using namespace std;
// Function OverLoading
int sum(int a,int b){
    return a+b;
}

int sum(int a,int b,int c){
    return a+b+c;
}

float sum(float a,float b){
    return a+b;
}


int main(){
    cout<<"Total :"<<sum(10,10)<<endl;
    cout<<"Total :"<<sum(10,20,30)<<endl;
    cout<<"Total :"<<sum(10,10)<<endl;
    return 0;
}