#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double x=1237234.1235;
    cout<<fixed<<setprecision(2)<<showpos<<setfill('a');
    cout<<setw(15)<<left<<x<<endl; //number will be in left
    cout<<setw(15)<<right<<x;     //number will be in right
    cout<<setw(15)<<internal<<x<<endl;
    //just having masti
    cout<<uppercase<<setw(5)<<setfill('0')<<right<<hex<<1<<endl;  
    return 0;
}