#include<iostream>
#include<iomanip>
using namespace std;
void CheckIncreasing(int arr[],int n);

int main(){
    int arr1[]={0,1,2,3,4,5,6,7,8,9};
    int arr2[]={0,1,2,3,4,5,6,7,3,9};

    CheckIncreasing(arr1,10);
    CheckIncreasing(arr2,10);

    return 0;
}

void CheckIncreasing(int arr[],int n){
    bool found=false;
    for(int i=0;i<n && (found==false);i++){
        if(arr[i]<arr[i-1]){
            found=true;
            cout<<"Error found"<<endl;break;
        }
        else{cout<<"No error found"<<endl;break;}
    }
    //if(found==true){cout<<"Error found"<<endl;}
    //else{cout<<"No errors"<<endl;} 
}