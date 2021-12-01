#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double hours,rate,regularPay,OverPay,TotalPay;
    cout<<"Enter hour worked: ";
    cin>>hours;
    cout<<"Enter pay rate: ";
    cin>>rate;
    regularPay=hours*rate;
    cin>>rate;
    regularPay=hours*rate;
    OverPay=0.0; 
    if(hours>40.0){
        OverPay=(hours-40.0)*rate*0.30;
    }
    
    return 0;
}