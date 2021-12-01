#include <iostream>
using namespace std;
class circle{
    private:
    double radius;
    public:
    double getradius() ;
    double getarea() ;
    double getperimeter();
    void setradius(double value); 
};
double circle::getradius() { return radius;}
double circle::getperimeter() { return 2*3.14*radius;}
double circle::getarea() { return 3.14*(radius*radius);}
void circle::setradius(double value) { radius=value;}
int main(){
    cout<<"Redcircle:"<<endl;
    circle redcircle,bluecircle;
    redcircle.setradius(10.0);
    cout<<"Radius is: "<<redcircle.getradius()<<endl;
    cout<<"Perimeter is: "<<redcircle.getarea()<<endl;
    cout<<"Area is: "<<redcircle.getarea()<<endl<<endl;
    bluecircle.setradius(99);
    cout<<"Bluecircle: "<<endl;
    cout<<"Radius is: "<<bluecircle.getradius()<<endl;
    cout<<"Perimeter is: "<<bluecircle.getarea()<<endl;
    cout<<"Area is: "<<bluecircle.getarea()<<endl;
    return 0;
}