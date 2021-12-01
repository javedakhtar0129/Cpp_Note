#include<iostream>
using namespace std;

int main(){
    int x=10;
    int *y;
    int **z;
    y=&x;
    z=&y;
    cout<<"x: "<<x<<endl;
    cout<<"&x: "<<&x<<endl<<endl;
    //y and its forms 
    cout<<"y: "<<y<<endl;
    cout<<"*y: "<<*y<<endl;
    cout<<"&y: "<<&y<<endl<<endl;
    //z and its forms
    cout<<"z: "<<z<<endl;
    cout<<"*z: "<<*z<<endl;
    cout<<"&z: "<<&z<<endl;
    cout<<"**z: "<<**z<<endl<<endl;

    return 0;
}