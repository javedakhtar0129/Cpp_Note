#include <iostream>
using namespace std;
int main(){
    int x=23;float y=77.325;bool z;
    int a=123;long b=140;double c=114.56;
    cout<<typeid(x+y+(z=false)).name()<<endl; //f
    cout<<"Type of a+b: "<<typeid(a+b).name()<<"ong"<<endl;
    cout<<"Value of a+b: "<<a+b<<endl<<endl;
    cout<<"Type of a+b+c: "<<typeid(a+b+c).name()<<"ouble"<<endl;
    cout<<"Value of a+b+c: "<<a+b+c<<endl;
    return 0;
}