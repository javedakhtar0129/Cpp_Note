#include<iostream>
using namespace std;

int main(){
    int x,pos=0,neg=0;
    cout<<"Enter numbers to be counted and zero to stop counting: "<<endl;
    do{
        cin>>x;
        if(x<0){
            neg+=x;
        }
        else{pos+=x;}
        
    }while(x!=0);

    cout<<"Sum of positive numbers: "<<pos<<endl;
    cout<<"Sum of negetive numbers: "<<neg<<endl;

    return 0;
}