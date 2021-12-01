#include<iostream>
using namespace std;
int main(){
    //1+2+3+4+5+.....
    int n,sum=0,repeat=1;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<"Sum of n numbers is: "<<endl;
    
    while(repeat<=n){         
        sum+=repeat;
        repeat++;
    }
    cout<<sum;
    return 0;
}