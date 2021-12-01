#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"&a: "<<&a<<endl;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"*ptr: "<<*ptr<<endl;

    *ptr=20;cout<<endl;
    cout<<"New a: "<<a<<endl;
    cout<<"New &a: "<<&a<<endl;
    cout<<"New *ptr: "<<*ptr<<endl;
    cout<<"New ptr: "<<ptr<<endl;
    ptr++;cout<<endl;
    cout<<"Increased a: "<<a<<endl;
    cout<<"Increased &a: "<<&a<<endl;
    cout<<"Increased *ptr: "<<*ptr<<endl;
    cout<<"Increased ptr: "<<ptr<<endl;

    return 0;
}