#include<iostream>
#include<string>
using namespace std;

int main(){

    string str1("fiywcskwvihbvlaauhfquqinsdvjbz");
    int count[26]={};

    for(int i=0;i<26;i++){
        count[i]=0;
    }
    //cout<<int(str1[5]);
    for(int i=0;i<str1.length();i++){
        count[int(str1[i])-32]+1;
        
    }

   

    return 0;
}