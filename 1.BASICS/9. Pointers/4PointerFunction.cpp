#include<iostream>
using namespace std;
void increament(int &x);
int main(){
    int x=5;

   cout<<"Before increament: "<<x<<endl;
    increament(x);
    cout<<"After increament: "<<x<<endl;

    return 0;
}

void increament(int &x){
    x++;
}