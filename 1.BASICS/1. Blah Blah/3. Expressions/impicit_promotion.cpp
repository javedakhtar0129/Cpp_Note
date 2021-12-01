#include <iostream>

using namespace std; /*This is implicit promotion*/
int main(){
    bool x=true; char y='A'; short z=14; float t=24.5;
    //bool to int
    cout<<"Type of x=100: "<<typeid(x+100).name()<<endl;
    cout<<"Value of x+100: "<<x+100<<endl;
    //char to int
    cout<<"Type of y+1000: "<<typeid(y+1000).name()<<endl;
    cout<<"type of y+1000: "<<y+1000<<endl;
    //short to int 
    cout<<"Type of z*1000: "<<typeid(z*10).name()<<endl;
    cout<<"Value of z*100: "<<z*100<<endl;   
    //float to double
    cout<<"Type of t+10000.2: "<<typeid(t+15000.2).name()<<endl;
    cout<<"Value of t+15000.2: "<<t+15000.2;
    return 0;
}