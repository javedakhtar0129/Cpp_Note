#include<iostream>
#include<climits>

using namespace std;

int main(){
    const int size=10;
    int number[size]={1,2,3,4,5,6,7,8,9,10};
    int small=INT_MAX;
    int large=INT_MIN;
    for(int i=0;i<size;i++){
        if(number[i]<small){
            small=number[i];
        }
        if(number[i]>large){
            large=number[i];
        }
    }
    cout<<"Smalles number: "<<small<<endl
    <<"Largest number: "<<large<<endl;

    return 0;
}