#include<iostream>
using namespace std;
int main(){
    int year;
    bool div400,div4,div100;
    bool leapyear;
    cout<<"Enter the year: ";
    cin>>year;

    div400=((year%400)==0);
    div4=((year%4)==0);
    div100=((year%100)==0);
    leapyear=(div400) || (div4 && !(div100));
    
    if(leapyear)
    {
    cout<<"It is "<<boolalpha<<leapyear<<", "<<year<<" is a Leap year";}
    else
    {
    cout<<"It is "<<boolalpha<<leapyear<<", "<<year<< " is not a leap year";}

    return 0;
}