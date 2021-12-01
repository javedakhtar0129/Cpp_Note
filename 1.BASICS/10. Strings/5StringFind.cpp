#include<iostream>
#include<string>

using namespace std;

int main(){

    string str1("qazxs wedcvf rtgbnhyujm kiooopl");
    string str2("lol");
    cout<<str1.find("wed")<<endl;
    //Intersting a string in between
    str1.insert(5,str2); //Inteserted str2 //method 1
    cout<<"Method 1: "<<str1<<endl;    //str1 has changes completely
    str1.erase(5,3);
    cout<<str1<<endl;  //str1 is back because we erased "lol"
    str1.insert(5,"lol");  //Method 2
    cout<<"Method 2: "<<str1<<endl;
    return 0;
}
