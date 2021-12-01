#include<iostream>
#include<cmath>
using namespace std;

double deno(double x);
double SUM(int n);
void VALUES(int x,int y);

int main(){
    
    VALUES(1,200);
    return 0;
}

double SUM(int n){
    double sum=0;
    for(int i=1;i<=n;i++){
        sum+=deno(i);
    }
    return 4*sum;
}

void VALUES(int x,int y){
    cout<<"Values of PI from i=1 to i=2000 is: ";
    for(int k=x;k<=y;k++){
        cout<<SUM(k)<<endl;
    }
}

double deno(double x){
    double element;
    for(double i=1;i<=x;i++){
       element=(pow(-1,i+1))/((2*i)-1);
    }
    return element;
}