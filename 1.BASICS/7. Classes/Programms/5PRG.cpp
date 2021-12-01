#include<iostream>
using namespace std;
class Triangle{
    private:
    int firstSide,secondSide,thirdSide;  
    double P,A;
    public:
    Triangle(int x,int y,int z);
    double getSides(void) const;
    double getP(void) ;
    double getA(void) ;
};
Triangle::Triangle(int x,int y,int z){
    firstSide=x;
    secondSide=y;
    thirdSide=z;
    if(x+y>z){
        cout<<"All good,Triangle is healthy";
    }
    else if(x+z>y){
        cout<<"All good,Triangle is healthy";
    }
    else if(z+y>x){
        cout<<"All good,Triangle is healthy";
    }
    else{cout<<"Triangle is not healthy";exit(0);}
}
double Triangle::getSides(void) const{
    cout<<"First side: "<<firstSide;
    cout<<"Second side: "<<secondSide;
    cout<<"Third side: "<<thirdSide;
    
}
double Triangle::getP(void) {
    P=firstSide+secondSide+thirdSide;
    return P;
}
double Triangle::getA(void) {
    A=sqrt((P/2)*((P/2)-firstSide)*((P/2)-secondSide)*((P/2)-thirdSide));
    return A;
}

int main(){
    Triangle(2,6,1);


    return 0;
}