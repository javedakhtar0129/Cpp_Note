#include <iostream>
using namespace std;
void eligibleornot(int age);
int main(){
    int age; bool eligible;
    eligibleornot(age);   
    return 0;
}
void eligibleornot(int age){
    int x; bool valid;
    cout<<"Enter age: ";
    cin>>x;
    valid=(x>=25)&&(x<=100);
    if(valid){cout<<"Seedha andar ao raja";}
    else {cout<<"Chal nikal";}
}