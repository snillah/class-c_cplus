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

class College{

    private :
    string name;
    
    int id;
    string address;
    
    public:
    float balance;
    College(){
        balance = 100000;
    }
    // account creation
    void getDetails(){
        cout<<"Enter the Name:"<<endl;
        cin>>name;
        cout<<"Enter the A/c:"<<endl;
        cin>>id;
        cout<<"Enter the Address:"<<endl;
        cin>>address;
    }
    void displayDetails(){
        cout<<"\n Customer Name :"<<name;
        cout<<"\n Customer Id No :"<<id;
        cout<<"\n Customer Type :"<<address;
    }
    void DisplayBalance(){
        cout<<"\n Balance : "<<balance;
     }

};

class management : public College {
    
    public:
     
     void feesCollector(){
        float deposit;
        cout<<"Enter the Fees amount:"<<endl;
        cin>>deposit;
        balance = balance+deposit;
        cout<<"balance : "<<balance<<endl;

     }
     void salaryPayment(){
        float payment;
        cout<<"Enter the Deposit amount:"<<endl;
        cin>>payment;
        balance = balance-payment;
        cout<<"balance : "<<balance<<endl;

        if(balance > 1000){
            balance = balance - payment;
            cout<<"current balance after withdraw : "<< balance;
        }else{
            cout<<"\n Insufficient balance  : "<<balance;
        }
     }
     void departmentCampaigns(){
        cout<<"Current Status : "<<"BCA Fare Well"<<endl;
     }
     void currentDisplay(){
        cout<<"\n Balance : "<<balance<<endl;
     }
};

int main(){
    
    management c1;
    int choice;

    char type;
    cout<<"Enter the Saving s or Current c:"<<endl;
    cin>>type;
    // type ="s"
    if(type =='t'||type =='T'){
        c1.getDetails();
        while(1){
            cout<<"\n click your choice"<<endl;
            cout<<"\n1. Salary Payment"<<endl;
            cout<<"\n2. Program Status"<<endl;
            cout<<"\n4. Exist"<<endl;
            cout<<"\n Enter the value"<<endl;
            cout<<"Enter your Choice':"<<endl;
            cin>>choice;
            switch(choice){
                case 1:
                c1.salaryPayment();
                break;
                case 2:
                c1.departmentCampaigns();
                break;
                case 4:
                goto end;
                default:
                cout<<"Enter choice invalid, try again"<<endl;
            }
        }
    }else if(type =='s'||type =='S'){
        c1.getDetails();
        while(1){
            cout<<"\n click your choice"<<endl;
            cout<<"\n1. Fees Payment"<<endl;
            cout<<"\n2. Program Status"<<endl;
            cout<<"\n4. Exist"<<endl;
            cout<<"Enter your Choice':"<<endl;
            cin>>choice;
            switch(choice){
                case 1:
                c1.feesCollector();
                break;
                case 2:
                c1.departmentCampaigns();
                break;
                case 4:
                goto end;
                default:
                cout<<"Enter choice invalid, try again"<<endl;
            }
        }
    }else if(type == 'c'){
        cout<<"current Status "<<endl;
        c1.departmentCampaigns();
        while(1){
            cout<<"\n click your choice"<<endl;
            cout<<"\n1. Check balance"<<endl;
            cout<<"\n2. Exist"<<endl;
            cout<<"Enter your Choice':"<<endl;
            cin>>choice;
            switch(choice){
                case 1:
                c1.DisplayBalance();
                break;
                case 2:
                goto end;
                default:
                cout<<"Enter choice invalid, try again"<<endl;
            }
        }

    }else{
        cout<<"\n Invaild Account Selection"<<endl;
    }
    end:
    cout<<"\n Thank You for transaction with us"<<endl;
    
    return 0;

}