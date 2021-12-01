#include<iostream>
using namespace std;

int main(){
    int size;
    int *A;  //First we have to store a pointer in stack of 4bytes
    A=new int[size]; //then it will point towards a new array in heap
    do{
        cout<<"Enter a value greater than zero: ";
        cin>>size;
    }while(size<=0);
    for(int i=0;i<size;i++){
        cout<<"Allocate element of "<<i<<" place: ";
        cin>>*(A+i);
    }
    //Here program will remember the value of A and it's elements 
    //because they are stored in heap memory
    cout<<"Your elemnts were: ";
    for(int i=0;i<size;i++){
        cout<<*(A+i)<<"  ";
    } 

    delete[]A; //Even still pointer will remain(Dangling pointer)
    A=NULL; //Es ist optional but always good to allocate NULL after you are done
    return 0;
}