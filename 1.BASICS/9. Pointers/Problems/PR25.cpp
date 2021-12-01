#include<iostream>
using namespace std;

int main(){
    int **arr= new int *[3];

    for(int i=0;i<3;i++){
        arr[i]=new int [5];
        cout<<arr[i]<<"  ";
    }
    delete[]arr;

    return 0;
}