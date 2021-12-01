#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float size,i,j;
    cout<<"Enter: "; cin>>size;
    for(i=1;i<=size;i++){
        for(j=1;j<=size;j++){
            cout<<setw(5)<<left<<i*j;
        }
        cout<<endl;
    }
    return 0;
}
