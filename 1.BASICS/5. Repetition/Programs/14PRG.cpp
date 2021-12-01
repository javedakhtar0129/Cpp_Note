#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cout<<"Enter your number: ";
    cin>>x;
    while(x>0){
        y=x%10;
        z=z*10+y;
        x=x/10;
    }
    cout<<"Reverse is: "<<z;

    return 0;
}