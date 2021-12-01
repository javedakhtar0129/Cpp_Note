#include<iostream>
using namespace std;

int main(){
    int num1,num2,larger;
    cout<<"Enter numbers: ";
    cin>>num1>>num2;
    larger=num1>=num2?num1:num2;
    cout<<"The larger is: "<<larger;

    return 0;
}