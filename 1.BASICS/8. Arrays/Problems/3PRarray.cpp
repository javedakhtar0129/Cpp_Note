#include<iostream>
using namespace std;
int main(){
    int A[10];
    for(int i=0;i<10;i++){
        if( A[i%2==0] ){ A[i]=0; }
        else{ A[i]=1; }
    }
    for(int i=0;i<10;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}