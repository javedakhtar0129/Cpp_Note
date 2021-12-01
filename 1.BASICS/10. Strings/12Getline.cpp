#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    cout<<"Enter string with a default delimiter: "<<endl;
    getline(cin,str);
    cout<<str<<endl<<endl;

    cout<<"Enter stirng with a default delimiter: "<<endl;
    getline(cin,str,'$');
    cout<<str<<endl;


    return 0;
}