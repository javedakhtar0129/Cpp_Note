#include<iostream>
#include<string>
using namespace std;
int main(){
    string S1("ham wham sham ");
    cout<<S1.find("am")<<endl;  //Forwards
    cout<<S1.rfind("am")<<endl;  //Backwards/reverse

    return 0;
}