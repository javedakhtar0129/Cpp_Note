#include<iostream>
using namespace std;

class Base{
    int data1;
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base::setdata(){
    data1=10;
    data2=20;
}
int Base::getdata1(){
    return data1;
}
int Base::getdata2(){
    return data2;
}
class Derive: public Base{
    int data3;
    public:
    void process();
    void display();    
};

void Derive::process(){
    data3=data2*getdata1();
}
void Derive::display(){
    cout<<"Data1: "<<getdata1()<<endl;  //data1 is private and can't be accessed
    cout<<"Data2: "<<data2<<endl;
    cout<<"Data3: "<<data3<<endl; 
}
int main(){
    Derive Der;
    Der.setdata();
    Der.getdata1();
    Der.getdata2();
    Der.process();
    Der.display();
    Base X;
    X.setdata();
    cout<<"Base class getdata(): "<<X.getdata1();

    return 0;
}