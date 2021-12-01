#include<iostream>
using namespace std;

int main(){
    int a[]={10,20,30};
    cout<<"*a[]: "<<*a<<endl; //Because it holds the address of a[0] i.e 10
    //Now
    int *ptr=a; //No need to write *ptr=&a because array already behaves as an pointer
    
    //printing array without the help of pointer
    cout<<"Array a[]: ";
    for(int i=0;i<3;i++){
        cout<<*(a+i)<<"  ";
    }
    //One more method
    cout<<endl<<"Array a[]: ";
    for(int i=0;i<3;i++){
        cout<<a[i]<<"  ";
    }
    
    return 0;
}