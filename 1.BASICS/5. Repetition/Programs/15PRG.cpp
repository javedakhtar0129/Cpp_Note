#include<iostream>
using namespace std;

int main(){
    int x,y,z,k;
    cout<<"Enter your number: ";
    cin>>x;
    while(k>0){
        k=x;
        y=k%10;
        z=z*10+y;
        k=k/10;
    }
    if(z==x){
        cout<<"Your number is a palindrome!";
    }
    else{cout<<"Mehhh!!!";}

    return 0;
}