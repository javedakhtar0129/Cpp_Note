#include<iostream>
#include<string>
using namespace std;

int main(){ 
    string S1("6543");
    //To convert string into integer use stoi(string to int)  
    int x= stoi(S1);
    cout<<"stoi x: "<<x<<endl;
    /* 
    1.Similarly there is stof,stod,stod etc for float,double and long etc
    */


    return 0;
}