#include<iostream>
using namespace std;

int main(){
    int x,z,high=INT_MIN,low=INT_MAX;
    cout<<"Enter number of values: ";
    cin>>x;
    cout<<endl<<"Enter your "<<x<<" values here: "<<endl;
    for(int i=0;i<x;i++){
        cin>>z;
        if(z>high){high=z;}
        if(z<low){low=z;}
    }
    cout<<"Highest value is: "<<high<<endl;
    cout<<"Lowest value is: "<<low<<endl;

    return 0;
}