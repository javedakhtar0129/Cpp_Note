#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double d; int integer; double fraction;
    cout<<"Enter your number: "<<endl;
    cin>>d;
    integer=static_cast<int>(d);
    fraction= d - integer;

    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The oringinal number: "<<d<<endl;
    cout<<"The integral part: "<<integer<<endl;
    cout<<"The fraction part: "<<fraction;
    return 0;
}
