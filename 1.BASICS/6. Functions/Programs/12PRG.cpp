#include<iostream>
#include<cmath>
using namespace std;
void blip(float x);
int main(){
    blip(37);
    blip(-40);
    blip(22);
    blip(0);
    return 0;
}
void blip(float x){
    cout<<((x*9)/5)+32<<endl;
}