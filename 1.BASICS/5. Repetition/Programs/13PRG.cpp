#include<iostream>
using namespace std;

int main(){
    int x,y,z=0;
    cout<<"Enter your number: ";
    cin>>x;
    while(x>0){
        y=x%10;
        z+=y;
        x=x/10;
    }

    cout<<"Sum of digits is: "<<z;
    

    return 0;
}