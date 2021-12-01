#include <iostream>
using namespace std;
int main(){
    int x;double y; //declaration
    x=23.67;y=130;  //Assignment 
    
    cout<<"Type of x: "<<typeid(x=23.67).name()<<endl; //checking y
    cout<<"Value of x after assignment: "<<x<<endl<<endl;

    cout<<"Type of y: "<<typeid(y=130).name()<<endl; //checking x
    cout<<"Value of y after assignment: "<<y<<endl<<endl;
    return 0;
}