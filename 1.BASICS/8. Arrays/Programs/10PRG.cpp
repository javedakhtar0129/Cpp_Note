#include<iostream>
#include<ctime>
using namespace std;
void print(int X[],int Y[],int Z[]);
int main(){
    int A[5],B[5],C[2][5];
    srand(time(NULL));

    for(int i=0;i<5;i++){
        A[i]=(rand()%99)+1;  
    }
    for(int i=0;i<5;i++){
        B[i]=(rand()%99)+1;  
    }
    print(A,B,C);

    return 0;
}
void print(int X[],int Y[],int Z[]){
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){

        }
    }
}