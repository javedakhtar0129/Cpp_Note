#include<iostream>
using namespace std;
int main(){
     int A[10];
    for(int i=0;i<10;i++){
        if(i<5){A[i]=5;}
        else{A[i]=10;}
    }
    for(int i=0;i<10;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}