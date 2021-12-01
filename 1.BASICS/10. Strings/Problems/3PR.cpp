#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
    //FOR C LIBRIARY
    char str1 [ ] = "This is the first string."; 
    const char* str2 = "Here is another one."; 
    strcpy (str1, str2);  //First string should be large enough to copy second string
    cout << str1 << endl;

    //FOR C++ LIBRIARY
    string s1("This is the first string");
    string s2("This one's second");
    s1.assign(s2);
    cout<<s1<<endl;



    return 0;
}