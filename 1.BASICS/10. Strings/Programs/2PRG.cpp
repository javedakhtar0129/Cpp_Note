#include<string>
#include<iostream>
using namespace std;
string uppercase(string& X);
int main(){
    string X;
    cout<<"Enter your string below: ";
    getline(cin,X);
    uppercase(X);
    cout<<X;
    return 0;
}
        
string uppercase(string& X){
    string Y;
    cout<<"Your Uppercase string is: ";
    for(int i=0;i<X.length();i++){
        X[i]=char(int(X[i]-32));
    }
    return X;
}
