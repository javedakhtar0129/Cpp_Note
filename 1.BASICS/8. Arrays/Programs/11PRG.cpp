#include<iostream>
#include<ctime>
using namespace std;
void create(int A[][5]);
int main(){
    const int a=2,b=5;
    srand(time(NULL));
    int A[2][5],B[2][5];
    create(A);

    return 0;
}
void create(int A[][5]){
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            A[i][j]=rand()%(100)+100;
        }
    }
    
}