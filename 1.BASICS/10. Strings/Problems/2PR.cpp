#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main(){
    const char* str1("This is a string");
    const char* str2("This is another string");
    cout<<"strcpm(): "<<strcmp(str1,str2)<<endl;  //this compare the two strings
    //First compared to another,if ans is negetive then 
    //first string is smaller

    //FOR C++ library 
    string s1("This is first string");
    string s2("This is aalu");
    cout<<"s1.compare(s2): "<<s1.compare(s2)<<endl;

    return 0;
}