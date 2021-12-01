#include<iostream>
using namespace std;

int main(){
    int A[]={0,1,2,3,4,5,6,7,8,9};
    int *ptr;
    ptr =A;
    int *ptr2=ptr;
    cout<<"A:"<<A<<endl;
    cout<<"&A: "<<&A<<endl;
    cout<<"*A: "<<*A<<endl;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"&ptr: "<<&ptr<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    cout<<"ptr2: "<<ptr2<<endl;
    cout<<"&ptr2: "<<&ptr2<<endl;
    cout<<"*ptr2: "<<*ptr2<<endl;

    //We cant add two pointers but we can subtract them
    cout<<"ptr+ptr2: "<<ptr-ptr2<<endl; 
    cout<<"*ptr+*ptr2: "<<*ptr + *ptr2<<endl;


    return 0;
}