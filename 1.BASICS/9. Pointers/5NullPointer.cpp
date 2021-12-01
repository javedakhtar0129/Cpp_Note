#include<iostream>
using namespace std;
#define ZERO 0
int main(){
    int x=0;
    int *y=&x;
    int *z=0; //Null Pointer
    int **k=&z;

    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    cout<<"*y: "<<*y<<endl;
    cout<<"&y: "<<&y<<endl;
    cout<<"z: "<<z<<endl;  //NULL pointer
    cout<<"k: "<<k<<endl;
    cout<<"*k: "<<*k<<endl;
    cout<<"**k: "<<**k<<endl; //will not print any value
    cout<<"&k: "<<&k<<endl;  //will not print any value

    return 0;
}