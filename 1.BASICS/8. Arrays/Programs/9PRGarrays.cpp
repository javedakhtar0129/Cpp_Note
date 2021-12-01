#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void print(int A[],int B[],int size);
int main(){
    srand(time(NULL));
    const int size=5;
    int A[size],B[size];
    cout<<"Random A array is: ";
    for(int i=0;i<size;i++){
        A[i]=(rand()%100)+100;
        cout<<A[i]<<"  ";
    }
    cout<<endl<<"Random B array is: ";
    for(int i=0;i<size;i++){
        B[i]=(rand()%100)+100;
        cout<<B[i]<<"  ";
    }

    cout<<endl<<"Baari baari selected"<<endl;
    print(A,B,5);
    return 0;
}

void print(int A[],int B[],int size){
    for(int i=0;i<size;i++){
        if(i%2==0){
        cout<<A[i]<<" ";
    }
    else{cout<<B[i]<<" ";}
    }
}