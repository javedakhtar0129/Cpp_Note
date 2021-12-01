#include<iostream>
using namespace std;

int main(){
    int x,y,upper,lower;
    cout<<"Enter both numbers between 1 and 100: "<<endl;
    cin>>x>>y;
    if(x<y){ upper=y; }
    else{ upper=x; }

    for(int i=1;i<=upper;i++){
        if(x%i==0 && y%i==0){
            cout<<i<<" ";
        }
    }

    return 0;
}