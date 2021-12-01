#include <iostream>
using namespace std;

int main(){
    int A[9],sum=0;
    for(int i=0;i<9;i++){
        A[i]=i+100;
    }
    for(int i=0;i<9;i++){
        cout<<i<<"    "<<A[i]<<endl;
    }
    for(int i=0;i<9;i++){
        sum+=A[i];
    }
    cout<<"Sum is: "<<sum;

    return 0;
}