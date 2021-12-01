#include<iostream>
using namespace std;

int main(){
    float x;
    srand(time(0));
    cout<<"Enter number of times: "; cin>>x;
    cout<<"Results for x number if times is: ";
    for(int i=0;i<x;i++){
        cout<<(float)(rand()%10)/10<<"  ";
    }

    return 0;
}
