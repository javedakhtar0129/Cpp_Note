#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string& str);
void reverse(string& tempo);

int main(){
    string str;
    cout<<"Enter your string: "<<endl;
    getline(cin,str); 

    if(ispalindrome(str)){ cout<<"IS A PALINDROME!!"; }
    else{ cout<<"NOT A PALINDROME!!"; }

    return 0;
}
bool ispalindrome(string& str){
    string tempo(str);
    reverse(tempo);

    return (str==tempo);
}
void reverse(string& tempo){
    string temp1(tempo);
    for(int i=0;i<tempo.length();i++){
        tempo.at(i)=temp1.at(tempo.length()-i-1);
    }
}