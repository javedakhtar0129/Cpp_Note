#include<iostream>
using namespace std;

int main(){
    int A=10;
    int* ptr1 = &A;
    int** ptr2 = &ptr1;

    cout<<"Value of A: "<<A<<endl;
    cout<<"Address of A: "<<&A<<endl;
    cout<<"Value of ptr1: "<<ptr1<<endl;
    cout<<"Address of ptr1: "<<&ptr1<<endl;
    cout<<"Value of ptr2: "<<ptr2<<endl;
    cout<<"Address of ptr2: "<<&ptr2<<endl;

    return 0;
}