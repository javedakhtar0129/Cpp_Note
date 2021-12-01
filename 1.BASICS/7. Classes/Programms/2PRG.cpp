#include<iostream>
using namespace std;

class Two{
    private:
    int x;
    char a;
    public:
    void setX();
    void setA();
    int getX();
    char getA();
};
void Two::setX(){
    int y;
    cout<<"Enter value of x: ";
    cin>>y;
    x=y;
}
void Two::setA(){
    char y;
    cout<<"Enter value of a: ";
    cin>>y;
    a=y;
}
int Two::getX(){
    cout<<endl<<"Your value of x is: ";
    return x;
}
char Two::getA(){
    cout<<endl<<"Your value of a is: ";
    return a;
}
//
int main(){
    Two x,a;
    x.setX();
    a.setA();
    cout<<x.getX();
    cout<<a.getA();    
    return 0;
}