#include<iostream>
using namespace std;

int main(){
    int x;
    srand(time(0));
    cout<<"Enter number of times: "; cin>>x;
    cout<<"Results for x number if times is: ";
    for(int i=0;i<x;i++){
        cout<<rand()%2<<" ";
    }

    return 0;
}
