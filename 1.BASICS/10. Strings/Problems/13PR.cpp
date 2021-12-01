#include<string>
#include<iostream>
using namespace std;
int main(){
    string X;
    cout<<"Enter your string below: ";
    getline(cin,X);
    if(X.length()>=8){
        cout<<"First four elements: "<<X.substr(0,4)<<endl;
        cout<<"Last four elements: "<<X.substr((X.length()-4),X.length())<<endl;
        cout<<"Combined string is: "<<X.substr(0,4)+X.substr((X.length()-4),X.length());
    }
    else{
        cout<<"Not enough elements to extract!"<<endl;
        exit (0);
    }
    return 0;
}