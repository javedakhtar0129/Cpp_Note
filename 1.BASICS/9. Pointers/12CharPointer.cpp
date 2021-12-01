#include<iostream>
using namespace std;

int main(){
    char someString[]="Hello!";
    char* ptr1=&someString[3]; 
    char* ptr2=&someString[0];
    cout<<"string: "<<someString<<endl;

    cout<<"pLocation1 = "<<ptr1<<endl;
    cout<<"ptr2 = "<<ptr2<<endl;

    cout<<"divison: "<<*ptr1-*ptr2<<endl;

    return 0;
}