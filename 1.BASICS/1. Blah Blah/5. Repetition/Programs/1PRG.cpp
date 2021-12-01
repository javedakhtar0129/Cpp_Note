#include<iostream>
using namespace std;

int main(){
    int size=5;
  
    cout<<"PATTERN 1"<<endl;
    for(int i=1;i<=size;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl<<"PATTERN 2"<<endl;
    for(int i=size;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl<<"PATTERN 3"<<endl;
    for(int i=size;i>=1;i--){
        for(int j=0;j<size-i;j++){
            cout<<"  ";
        }
        for(int k=0;k<=i-1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl<<"PATTERN 4"<<endl;
    for(int i=size;i>=1;i--){
        for(int j=1;j<=i-1;j++){
            cout<<"  ";
        }
        for(int k=1;k<=size;k++){
            cout<<"* ";
        }
        cout<<endl;

    }

    return 0;
}