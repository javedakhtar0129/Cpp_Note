#include<iostream>
using namespace std;

int main(){
    const int size=10;
    int A[size]={1,2,3,4,5,6,7,8,9,10},value;
    bool found=false;
    for(int i=0;(i<size) && (!found);i++){
        if(A[i]==7){
            found=true;
            value=i;
        }
    }
    if(found){ cout<<"Value found is: "<<value+1; }
    else{ cout<<"Value was not found!";}

    return 0;
}