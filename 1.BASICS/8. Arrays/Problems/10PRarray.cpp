#include<iostream>
using namespace std;
void check(int A[],int B[],int N,int M);
int main(){
    int N=0,M=0;
    int A[N],B[M];
    cout<<"Enter values of N & M: ";
    cin>>N>>M;
    check(A,B,N,M);
    return 0;
}
void check(int A[],int B[],int N,int M){
    if(N=M){
        for(int i=0;i<N || i<M;i++){
            if(A[i]=B[i]){
                cout<<"All good with arrays!"<<endl;
            }
            else{ cout<<"Element are not same!";}
        }
    }
    else{
        cout<<"Number of elements are not same!"<<endl;
    }
}