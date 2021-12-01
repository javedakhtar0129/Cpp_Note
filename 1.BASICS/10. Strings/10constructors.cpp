#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    string str1(5,'a');
    string str2("hello Javed",7);  //Here empty space-bar will also be included
    string str3("Hello Javed");

    cout<<"Str1: "<<str1<<endl;
    cout<<"Str2: "<<str2<<endl;
    cout<<"Str3: "<<str3<<endl;
    bool flag=str1.empty();
    cout<<boolalpha<<flag;
    return 0;
}
