#include<iostream>
using namespace std;

class Point{
    private:
    int x,y;
    public:
    void cartesian(int x,int y);
};
void Point::cartesian(int x,int y){
    if(x==0 && y==0)    { cout<<"Origin!!!"<<endl;}
    else if(x>0 && y>0) { cout<<"First Quadrant"<<endl;}
    else if(x<0 && y>0) { cout<<"Second Quadrant"<<endl;}
    else if(x<0 && y<0) { cout<<"Third Quadrant"<<endl;}
    else if(x>0 && y<0) { cout<<"Fourth Quadrant"<<endl;}
}
int main(){
    Point a,b,c,d,e;
    a.cartesian(0,0);
    b.cartesian(3,4);
    c.cartesian(-5,6);
    d.cartesian(-6,-23);
    e.cartesian(4,-7);
    return 0;
}