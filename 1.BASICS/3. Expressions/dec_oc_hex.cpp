#include<iostream>
using namespace std;
int main(){
    int x=1237;
    cout<<"x in dcimal: "<<x<<endl;
    cout<<"x in octal: "<<oct<<x<<endl;
    cout<<"x in hexadecimal: "<<hex<<x<<endl<<endl;
    //
    cout<<"x in decimal: "<<x<<endl;
    cout<<"x in octal: "<<showbase<<oct<<x<<endl;
    cout<<"x in hexadecimal: "<<showbase<<hex<<x;
    return 0;
}