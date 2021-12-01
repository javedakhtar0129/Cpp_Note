#include<iostream>
using namespace std;

int main(){
    int A[10]={1,2,3,4,5,6,7,8,9,10},swap;
    cout<<"second: "<<A[1]<<endl;
    cout<<"Third: "<<A[2]<<endl;
    cout<<"Now we will swap"<<endl<<endl;
    swap=A[1];
    A[1]=A[2];
    A[2]=swap;

    cout<<"Now second is: "<<A[1]<<endl;
    cout<<"third is: "<<A[2]<<endl;


    return 0;
}