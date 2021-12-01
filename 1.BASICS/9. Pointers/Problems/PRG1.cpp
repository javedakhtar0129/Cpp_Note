#include<iostream>
using namespace std;
void check(int A[]);
int main(){
    int A[3];
    cout<<"Enter your numbers: ";
    for(int i=0;i<3;i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>*(A+i);
    }
    check(A);

    return 0;
}
void check(int A[]){
    if(*(A+0)<*(A+1)){
        if(*(A+1)<*(A+2)){
            cout<<"Larger number is "<<*(A+1);
        }
        else{
            cout<<"Larger number is "<<*(A+2);
        }
    }
    else if(*(A+0)>*(A+1)){
        if(*(A+0)>*(A+2)){
            cout<<"Larger number is "<<*(A+0);
        }
        else{
            cout<<"Larger number is "<<*(A+2);
        }
    }
    
}