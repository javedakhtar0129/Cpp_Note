#include<iostream>
using namespace std;

int main(){
    char  x='A'; short z=14; float t=24.5; bool y=true;
    cout<<"Type of z: "<<typeid(z+15.0).name()<<endl;
    cout<<"value of z: "<<z*10<<endl<<endl;
    
    
    return 0;
}