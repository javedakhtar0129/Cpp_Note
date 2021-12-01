#include<iostream>
#include<string>

using namespace std;

int main(){
    int a=20;
    string b=to_string(a);
    int c=stoi(to_string(a));
    b+="qw";
    cout<<"a: "<<a<<endl;
    cout<<"a+2: "<<a+2<<endl;
    cout<<"to_string b: "<<b<<endl; //x is converted into string
    cout<<"b+'2': "<<b+"2"<<endl;   //"2" is added at the end as a charachter 
    cout<<"c: "<<c<<endl;
    cout<<"c+2: "<<c+2<<endl;

    return 0;
}