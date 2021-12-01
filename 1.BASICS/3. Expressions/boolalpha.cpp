#include<iostream>
using namespace std;
int main(){
    bool x=true;
    bool y=false;
    cout<<"Value of x using default: "<<x<<endl;
    cout<<"Value of y using default: "<<y<<endl;
    cout<<boolalpha;
    cout<<"Value of using manipulator: "<<x<<endl;
    cout<<"Value of y: "<<y;
    return 0;
}