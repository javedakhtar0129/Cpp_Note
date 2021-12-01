#include<iostream>
#include<string>
using namespace std;

int main(){
    string a=("ooga booga huu hulla");
    //Methods to access a certain char in string
    cout<<a[3]<<"  "<<a[12]<<endl;
    cout<<a.at(3)<<"  "<<a.at(12)<<endl;
    cout<<"string is: "<<a<<endl;
    a.clear();
    cout<<"cleared string is: "<<a<<endl;  //string is cleared
    a.assign("dsvsvsv");   //assignining new string
    cout<<a;


    return 0;
}