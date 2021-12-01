#include<iostream>
using namespace std;

void TwoTimes(int arr1[],int size);

int main(){
    const int size=10;
    int arr1[size]={0,1,2,3,4,5,6,7,8,9};
    TwoTimes(arr1,10);
    return 0;
}

void TwoTimes(int arr1[],int size){
    int arr2[size];
    for(int i=0;i<size;i++){
        arr2[i]=arr1[i]*2;
    
    }
    for(int i=0;i<size;i++){
        cout<<arr2[i]<<" ";
    }
}