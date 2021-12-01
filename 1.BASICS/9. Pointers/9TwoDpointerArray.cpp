#include<iostream>
using namespace std;

int main(){

    int A[2][3]={{10,20,30},{40,50,60}};
    int (*ptr)[3]=A;
    //Print same values i.e addresses
    cout<<"A: "<<A<<endl;
    cout<<"*A: "<<*A<<endl;
    cout<<"A[0]: "<<A[0]<<endl<<endl;
    //A[i][j]= *(A[i]+j)= *(*(A+i)+j)
    cout<<"A[i][j]: "<< A[1][2]<<endl;
    cout<<"*(A[i]+j): "<< *(A[1]+2)<<endl;
    cout<<"*(*(A+i)+j): "<< *(*(A+1)+2)<<endl<<endl;
    // *A[i] is same as *(A+i)
    // &A[i] is same as  A+i
    cout<<A+1<<endl;
    cout<<&A[1]<<endl;
    cout<<*(A+1)<<endl;
    return 0;
}