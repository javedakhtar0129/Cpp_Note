#include<string>
#include<iostream>
using namespace std;
void reverse(string& str);
int main(){
    string str;
    getline(cin,str,'#');

    reverse(str);
    cout<<endl<<"reverse line:  "<<str<<endl;
    return 0;
}

void reverse(string& str){
    string temp(str);
    for(int i=0;i<str.length();i++){
        str[i]=temp[str.length()-i-1];
    }
}