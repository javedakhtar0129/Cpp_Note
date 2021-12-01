#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int repeat=1,sum=0,n;
    cout<<"Enter value o n: ";
    cin>>n;
    cout<<"Sum of square is: ";
    while(repeat<=n){
        sum+=pow(repeat,2);
        repeat ++;
    }
    cout<<sum;
    //Now there is a better way,which is formula Gauss formula
    cout<<endl<<endl<<"Also Sum this way is: ";
    cout<<(n*(n+1)*(2*n+1))/6;

    return 0;
}