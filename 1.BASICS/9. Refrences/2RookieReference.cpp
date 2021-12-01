#include<iostream>
using namespace std;

int main(){
    int a=5,c=7;
    int& b=a;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    //Now Assigning b to some different variable
    int& b=c;
    cout<<"c: "<<c<<endl;
    cout<<"b: "<<b<<endl;
    //This will give a compilation error during running of code
    return 0;
} 

/* Rule 1:-
1.After a reference variable has been declared and bound to a variable name, 
  a reference relationship has been created between them and cannot be broken 
  until the variables are de- stroyed (go out of scope).
*/

    