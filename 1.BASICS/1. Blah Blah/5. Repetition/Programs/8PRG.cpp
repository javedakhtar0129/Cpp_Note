#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter your number: ";
    cin>>x;
      
    cout<<"Factors are: ";
    for(int i=1;i<x;i++){
        if(x%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}