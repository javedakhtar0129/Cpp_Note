#include<iostream>
using namespace std;
int main(){
    int temperature;
    bool hot,cold;
    cout<<"Enter your temperature: ";
    hot=(temperature>=75);
    cold=(temperature<=65);
    cin>>temperature;
    if(hot || cold){
        cout<<"System is turned on!";
        if(hot){cout<<"System is working";}
        else{cout<<"System is working";}
    }
    else cout<<" System is not working";
    return 0;
}