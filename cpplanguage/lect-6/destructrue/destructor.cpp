#include <iostream>
using namespace std;

class Example {
private:
    int* data; //pointer for dynamic array
    int size;
public:
    Example(int s) { // Example(int s = 5) {   // default size = 5
        size =s; 
        data = new int[size]; // allocate memory
        cout << "Memory allocated size : "<<size << endl;
    }
    void insertValues(int index,int value){
        if(index >= 0 && size > index){
            data[index] = value;
        }else{
            cout<<"Index out of range"<<endl;
        }
    }
    // Method to display array
    void display(){
        for(int i =0;i<size;i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
    //Destructor
    ~Example() {
        delete[] data; // free memory
        cout << "Memory freed" << endl;
    }
};


int main(){
    Example eg1(5);
    eg1.insertValues(0,54);
    eg1.insertValues(1,43);
    eg1.insertValues(3,5);
    eg1.display();
    return 0;
}