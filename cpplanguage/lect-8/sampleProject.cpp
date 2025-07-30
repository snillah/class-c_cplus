#include<iostream>
using namespace std;

// 1.saving Account
// 2. current Account

/*
Account creation 
Deposit 
withdraw
balance
*/

class account{

    private :
    string name;
    int accno;
    string type;
    
    public:
    // account creation
    void getDetails(string name,int accno,string type){
        name = name;
        accno = accno;
        type= type;

    }
    void displayDetails(){
        cout<<"\n Customer Name :"<<name;
        cout<<"\n Customer A/c No :"<<accno;
        cout<<"\n Customer Type :"<<type;
    }

};

class currentAccount : public account{

    private:
        float balance;
    public:
     void currentDisplay(){
        cout<<"\n Balance : "<<balance;
     }
     void cDeposit(float deposit){
        float deposit = deposit;
        balance = balance+deposit;
     }
     void cWithDraw(float withdraw){
        float withraw =withdraw;
        cout<<"current balance : "<< balance;
        if(balance > 1000){
            balance = balance - withdraw;
            cout<<"current balance after withdraw : "<< balance;
        }else{
            cout<<"\n Insufficient balance  : "<< balance;
        }
     }
};

int main(){
    
    currentAccount c1;

    char type 
    type = "c";
    if(type =='s'||type =='S'){
        
    }else if(type =='c'||type =='S'){
        c1.getDetails("user1",12334,'c')
        while(1){
            cout<<"\n click your choice"<<endl;
            cout<<"\n1. Deposit"<<endl;
            cout<<"\n2. withdraw"<<endl;
            cout<<"\n3. Display Balance"<<endl;
            cout<<"\n4. Exist"<<endl;
            cout<<"\n5. Enter the value"<<endl;
            switch(choice){
                case 1:
                c1.cDeposit();
                break;
                case 5:
                goto end;
                default:
                cout<<"Enter choice invalid, try again"<<endl;
            }
        }
    }else{
        cout<<"\n Invaild Account Selection"
    }
    
    return 0;

}