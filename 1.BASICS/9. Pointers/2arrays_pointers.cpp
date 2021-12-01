#include<iostream>
using namespace std;

int main(){
    int a[]={10,20,30};
    cout<<"*a[]: "<<*a<<endl; //Because it holds the address of a[0] i.e 10
    //Now
    int *ptr=a; //No need to write *ptr=&a because array already behaves as an pointer

    //printing array with help of pointer
    cout<<"Array elements: ";
    for(int i=0;i<3;i++){
        cout<<*ptr<<"  "; //*ptr is called de-refrencing
        ptr++;
    }
    cout<<endl;

    //Printing address of each array element
    cout<<"Addresses of array elements: ";
    for(int i=0;i<3;i++){
        cout<<ptr+i<<"  "; //*ptr is called de-refrencing
       //ptr++; //we can use this also if we are not using i
    }

    return 0;
}