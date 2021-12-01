#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int x,y,z,sum;
    double average,dev1,dev2,dev3;
    cout<<"Enter three numbers with space between: ";
    cin>>x>>y>>z;
    sum=x+y+z;
    average=(double)sum/3;
    dev1=x-average;
    dev2=y-average;
    dev3=z-average;
    cout<<fixed<<setprecision(2)<<showpos;
    cout<<"Sum of three numbers: "<<sum<<endl;
    cout<<"Average"<<setw(9)<<average<<endl;
    cout<<"Deviation of number 1: "<<setw(9)<<dev1<<endl;
    cout<<"Deviation of number 2: "<<setw(9)<<dev2<<endl;
    cout<<"Deviation of number 3: "<<setw(9)<<dev3<<endl;

    return 0;
}