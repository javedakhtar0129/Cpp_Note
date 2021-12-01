#include<iostream>
#include<string>
using namespace std;

void getridoff(string& str,char X);

int main(){
    string str; 
    char X;
    cout<<"Enter your string: ";
    getline(cin,str);

    cout<<"Enter symbol to be removed: ";
    cin>>X;
   cout<<"Your string without symbol "<<X<<" is: "<<endl;
    getridoff(str,X);

    return 0;
}

void getridoff(string& str,char X){
    
    for(int i=0;i<str.length();i++){
        if(str.at(i)==X){
           continue; 
        }
        cout<<str.at(i);    
    }
}