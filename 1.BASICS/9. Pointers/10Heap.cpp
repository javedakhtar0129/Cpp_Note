#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *p= new int();  //This will act as the pointer for Heap memory
    *p=10;  //Now this will store the value 10 in heap memory
    delete(p); //This will delete the memory stored i.e. 10, 
    //But the pointer will remain(Dangling pointer)
    p= new int[4];
    //Now p will be pointing towards a location where there is an array of size 4.
    delete[]p; //again deleting value store,Now there is no such array

    //At last 
    p=NULL; //There is no such pointer as p now,cause it has become a null pointer


    return 0;
} 