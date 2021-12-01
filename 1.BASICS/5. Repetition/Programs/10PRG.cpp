#include<iostream>
using namespace std;

int main(){
    int m,n,temp;
    cout<<"Enter two numbers: ";
    cin>>m>>n;
    do{
       for(int i=1;i<INT_MAX;i++){ 
        if(m-n<n){
        temp=m;
        m=n;
        n=temp;
        }
       }
    }while(n==0);
    
    cout<<"Highest diviser is: "<<m;

    return 0;
}
