#include <iostream>
using namespace std;
int main(){
    unsigned int x,y;
    cout<<"Enter a positive integer: ";
    cin>>x;
    y=x%10;
    cout<<"Entered integer: "<<x<<endl;
    cout<<"Extracted first digit: "<<y<<endl;
    return 0;
}