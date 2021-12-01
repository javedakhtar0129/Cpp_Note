#include<string>
#include<iostream>
using namespace std;
int main(){
    string X;
    cout<<"Enter your string below: ";
    getline(cin,X);
    cout<<endl<<"Initial size of your string is: "<<X.size()<<endl;
    if(X.length()%2==0){
        cout<<"EVEN FUNCTION!!"<<endl;
        cout<<"PART 1: "<<X.substr(0,X.length()/2)<<endl;
        cout<<"PART 2: "<<X.substr(X.length()/2,X.length())<<endl;
    }
    else{
        cout<<"ODD FNCTION!!"<<endl;
        X.push_back(' ');
        cout<<"New size of string: "<<X.size()<<endl;
        cout<<"PART 1: "<<X.substr(0,X.length()/2)<<endl;
        cout<<"PART 2: "<<X.substr(X.length()/2,X.length())<<endl;
    }

    return 0;
}