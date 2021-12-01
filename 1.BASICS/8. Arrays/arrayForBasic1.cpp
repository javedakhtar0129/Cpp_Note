#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your value of n: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Your arrays are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }
    return 0;
}