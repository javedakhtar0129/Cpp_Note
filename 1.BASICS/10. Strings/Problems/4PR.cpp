#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){
    char str1 [ ] = "javedsdfw jk the first string."; 
    const char* str2 = "Hereis another one."; 
    
    cout << strncpy (str1,str2,5)<< endl; //number is how many numbers from 
    //second string will be replaced in first string


    return 0;
}