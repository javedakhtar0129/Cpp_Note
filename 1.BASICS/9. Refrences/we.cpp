#include<iostream>
using namespace std;

void fun(int &x){}
int main(){
    int  x=90;
    int& y=x;
    int z=30;
    y=z;
    fun(x);
    return 0;
}