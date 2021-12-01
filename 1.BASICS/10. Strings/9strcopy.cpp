
//cstring
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[]="This is the first string";
    char str2[]="This is the second string";
    
    strcpy(str1,str2);
    cout<<"Str1: "<<str1<<endl;   //str1 is erased and str2 is copied
    cout<<"Str2: "<<str2<<endl;   //str2 is not changed
    //
    char str3[]="abcdefghijkl";
    char str4[]="ABCDEFGHIJKL";
    strncpy(str3,str4,5);
    cout<<"Str3: "<<str3<<endl;   //partially changed till 5th place
    cout<<"Str4: "<<str4<<endl;   //str4 is not changed
    return 0;
}