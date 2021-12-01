#include <iostream>
using namespace std;
void swap( int a, int b);
int main(){
    int a=5, b=6;
    cout<<"Before: a= "<<a<<" Before: b= "<<b<<endl;
    swap(a,b);
    cout<<"After: a= "<<a<<" Before: b= "<<b<<endl;
    return 0;
}
void swap( int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Swaped: a= "<<a<<" Swaped: b= "<<b<<endl;
    return;
}