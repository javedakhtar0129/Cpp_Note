#include<iostream>
using namespace std;

int main(){
    int a=5;
    int& b=a;

    cout<<"a: "<<a<<endl; //5
    cout<<"b: "<<b<<endl; //5
    b=a+1;
    cout<<"b+1: "<<b<<endl; //6
    cout<<"a: "<<a<<endl;  //5 NOPE!!! it will print 6 because referenced

    return 0;
}
/* Rule 1:-
1.When we bind a variable to a reference variable, 
  the type of the reference variable should always be a reference to the type of the original variable. 
2.After a reference variable has been declared and bound to a variable name, 
  a reference relationship has been created between them and cannot be broken 
  until the variables are de- stroyed (go out of scope).
*/
