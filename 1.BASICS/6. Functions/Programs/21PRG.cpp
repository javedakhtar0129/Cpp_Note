#include<iostream>
using namespace std;
void setnumber(int &x);
void digits(long long x);
int main(){
    int x;
    setnumber(x);
    digits(x);

    return 0;
}
void setnumber(int &x){
    cout<<"Enter your number: ";
    cin>>x;
}
void digits(long long x){
    long long num=0,y;
    while(x>0){
        x=x/10;
        num++;
    }
    cout<<"Number of digits are: "<<num;
}
