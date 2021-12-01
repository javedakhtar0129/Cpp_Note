#include<iostream>
using namespace std;

int fact(int x);
void pascal(int n);

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    pascal(n);
   
    return 0;
}

void pascal(int n){
    for(int i=0;i<=n;i++){
       cout<<fact(n)/(fact(i)*fact(n-i))<<"  ";
    }
    cout<<endl;
    for(int i=0;i<=n;i++){
       cout<<fact(n)/(fact(i)*fact(n-i))<<"  ";
    }

}
int fact(int x){
    int num=1;
    for(int i=0;i<=x;i++){
        if(i==0){ num=1; }
        else{ num*=i; }
    }
    return num;
}