#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    
    string str1("543621791");
    sort(str1.begin(),str1.end(),greater<int>());
    cout<<"Sorted: "<<str1<<endl;

    return 0;
}