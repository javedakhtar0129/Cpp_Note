#include<iostream>
using namespace std;
int main(){
    int NumberofMonths[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int number;
    do{
        cout<<"Enter your number of month: ";
        cin>>number;
    }while(number<1 || number>12);
    number-=1;  //Normalizing 
    cout<<"Your month has "<<NumberofMonths[number]<<" of days";
    return 0;
}