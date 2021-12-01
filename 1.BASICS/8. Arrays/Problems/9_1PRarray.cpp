#include<iostream>
using namespace std;
#define N 10
void reverse(int arr1[],int n);

int  main(){
int arr1[N] = {0,10,20,39,40,50,60,70,80,90};
reverse(arr1,N);

return 0;
}

void reverse(int arr1[],int n){
    for(int i=n;i>-1;i--){
        cout<<arr1[i]<<" ";
    }
}