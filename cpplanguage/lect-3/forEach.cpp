#include <iostream>

using namespace std;

int main(){
    // int num[] ={64,65,63,76,74,75} ;
    int n[] ={64,65,63,76,74,75} ;
    // int n[] = {1,4,5};
    int sum =0;
    // for(int u=0;u<6;u++){
    //     cout<<num[u]<<endl;
    // }
    
    cout<<"for Each"<<endl;
    for(auto x : n){
        
        sum = sum+x;
    }
    cout<<sum<<endl;
    
    cout<<"Sort"<<endl;
    int s = sizeof(n)/sizeof(n[0]);
    cout<<"size"<<s<<endl;
    int temp; 
    for(int i=0;i<s;i++){
        for(int j =i+1;j<s;j++){
            if(n[i]>n[j]){
                temp = n[i];
                n[i]=n[j];
                n[j] = n[i];
            }
        }
    }

     for(auto y : n){
        
        cout<<y<<endl;
    }

}

// In this example:
// sizeof(myNumbers) returns the total size of the array in bytes.
// sizeof(myNumbers[0]) returns the size of a single element in the array (e.g., 4 bytes for an int).
// Dividing the total size by the size of a single element yields the number of elements in the array.