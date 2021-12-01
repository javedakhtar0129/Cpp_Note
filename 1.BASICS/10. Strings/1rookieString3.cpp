#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1("nincompoop");
    cout<<s1<<endl;
    s1.erase(3,4);  //first number is the index of start number,
    //second number is how many numbers from that number.
    cout<<s1<<endl;

    return 0;
}
