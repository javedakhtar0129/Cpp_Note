#include<iostream>
using namespace std;
int main(){
    int row,column,r,c;
    do{ cout<<"Enter rows: ";cin>>row;}
    while(row<=0 || row>10);
    do{ cout<<"Enter column: ";cin>>column;}
    while(column<=0 || column>10);

    for(r=1;r<=row;r++){
        for(c=1;c<=r;c++){
        cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}