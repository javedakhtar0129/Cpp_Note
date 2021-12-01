#include<iostream>
using namespace std;

int main(){

    cout<<"Numbers divisible by 5 and 7: ";
    for(int i=1;i<=100;i++){
        if(i%5==0 && i%7==0){
            cout<<i<<" ";
        }
    }
    return 0;
}