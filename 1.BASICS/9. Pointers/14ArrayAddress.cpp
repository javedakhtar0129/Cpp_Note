#include<iostream>

using namespace std;

int main(){
    int A[5];

    for(int i=0;i<5;i++){
        cout<<i<<"."<<endl;
        cout<<"Address of with pointer at i= "<<i<<" is: "<<A+i<<endl;
        cout<<"Address using & at i= "<<i<<" is: "<<&A[i]<<endl;
        cout<<"Value of that element is: "<<*(A+i)<<endl<<endl;
    }

    return 0;
}