#include<iostream>
using namespace std;
int  main(){
int arr1 [10] = {0,10,20,39,40,50,60,70,80,90};
int arr2[10],j=9;
//Assigning reverse in arr2
for(int i=0;i<10;i++){
    arr2[i]=arr1[j--];
    cout<<arr2[i]<<" "; 
}

return 0;
}