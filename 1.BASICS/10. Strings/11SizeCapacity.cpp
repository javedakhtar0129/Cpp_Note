#include<iostream>
#include<string>
using namespace std;

int main(){
    string str("Hello People wassup");

    cout<<"Size: "<<str.size()<<endl;
    cout<<"Capacity: "<<str.capacity()<<endl;
    cout<<"Max Size: "<<str.max_size()<<endl;
    cout<<"Empty?: "<<boolalpha<<str.empty()<<endl;

    return 0;
}