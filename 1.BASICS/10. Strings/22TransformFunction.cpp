#include<iostream>
#include<string>
using namespace std;

int main(){

    string str1("jklnasjhaiga");
    //Initiate,string end, from where it will begin , what function to operate
    transform(str1.begin(),str1.end(),str1.begin(),::toupper);
    cout<<"Transformed to upper: "<<str1<<endl;

    transform(str1.begin(),str1.end(),str1.begin(),::tolower);
    cout<<"Transform to lower: "<<str1<<endl;

    return 0;
}