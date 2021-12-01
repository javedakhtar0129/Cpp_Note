#include<iostream>
using namespace std;

int main(){
    const int size=10;
    int A[size]={1,2,3,4,5,6,7,8,9,10};
    cout<<A[4]<<endl;  //Before deleting
    for(int i=4;i<size;i++){   //Deleting one element in array
        A[i]=A[i+1];
    }
    
    cout<<A[4]<<endl;  //After deleting


    return 0;
}