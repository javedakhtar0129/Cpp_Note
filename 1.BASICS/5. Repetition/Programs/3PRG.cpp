#include<iostream>
using namespace std;

int main(){
    int x,sum=0;
    cout<<"Enter your numbers but less than 1000: "<<endl;
    do{
        cin>>x;
        sum=sum+x;
    }while(x<1000 && x>=0);

    cout<<"Your sum is: "<<sum;

    return 0;
}