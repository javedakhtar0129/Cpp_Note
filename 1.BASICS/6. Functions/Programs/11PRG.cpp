#include<iostream>
#include<cmath>
using namespace std;

int main(){
    for(int i=1;i<=10;i++){
        cout<<"log("<<i<<")"<<" base 2 is: "<<log(i)/log(2)<<endl;
    }

    return 0;
}