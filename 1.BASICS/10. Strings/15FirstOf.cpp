#include<iostream>
#include<string>

using namespace std;

int main(){
    string str("My name is JAVED AKHTAR");
    cout<<str.find_first_of('n')<<endl;
    cout<<str.find_last_not_of('n')<<endl;

    return 0;
}