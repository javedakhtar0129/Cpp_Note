#include<iostream>
#include<string>

using namespace std;

int main(){
    /*
    1.If result is positive then first string is larger
    2.If result is negetive then first string is smaller
    3.If result is zero then both strings are equal
    */  
    string s1= "abc";
    string s2= "xyz";
    cout<<s1.compare(s2)<<endl;
    cout<<s2.compare(s1)<<endl;
    cout<<s2.compare(s2)<<endl;
    cout<<endl;
    //Also we can do
    if(s1.compare(s2)>0){
        cout<<s1<<" is larger"<<endl;

    }
    else if(s2.compare(s1)>0){
        cout<<s2<<" is larger"<<endl;
    }
    else if(s1.compare(s2)==0){
        cout<<"Both are equal"<<endl;
    }

    return 0;
}