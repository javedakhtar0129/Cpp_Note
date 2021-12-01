#include<iostream>
#include<string>
using namespace std;
int main(){
    string S1("hampster");
    string S2;
    string S3;
    //Methods to assign values
    S2=S1;         
    S3.assign(S1);

    cout<<S1<<S2<<S3<<endl;

    return 0;
}