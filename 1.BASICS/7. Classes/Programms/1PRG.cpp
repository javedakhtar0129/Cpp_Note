#include<iostream>
using namespace std;

class One{
    private:
    int x,y;
    public:
    void setXandY(int a,int b);
    int getX();
    int getY();
};
void One::setXandY(int a,int b){
    x=a;
    y=b;
}
int One::getX(){
    return x;
}
int One::getY(){
    return y;
}
//Main Function
int main(){
    One a,b;
    a.setXandY(55,72);
    cout<<"X is: "<<a.getX()<<endl;
    cout<<"Y is: "<<a.getY()<<endl;
    return 0;
}
