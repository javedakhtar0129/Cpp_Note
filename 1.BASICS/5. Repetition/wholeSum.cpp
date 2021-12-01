#include<iostream>
using namespace std;
int maint(){
    int num,sum=0;
    cout<<"Enter"; cin>>num;
    while(cin>>num){
        sum+=num;
        cout<<"Enter next";
    }
    cout<<"The sum is: "<<sum;
    return 0;
}