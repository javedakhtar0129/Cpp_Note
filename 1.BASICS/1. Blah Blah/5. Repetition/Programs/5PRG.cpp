#include<iostream>
using namespace std;

int main(){
    int up,low,even,odd;bool flag=0;
    cout<<"Set lower limit: ";
    cin>>low;
    cout<<"Set upper limit: ";
    cin>>up;
    cout<<"List of even numbers are: ";
    for(int i=low;i<up;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }

    cout<<endl<<"List of odd numbers are: ";
    for(int i=low;i<up;i++){
        if(!i%2==0){
            cout<<i<<" ";
        }
    }
    
    return 0;
}