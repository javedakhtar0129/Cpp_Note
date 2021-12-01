#include<iostream>
#include<cassert>
#include<cmath>
using namespace std;

class Fraction{
    public:
    Fraction(){
        cout<<"constructor called"<<endl; //constructor
    }
    Fraction(double x,double y);  //parameter constructor
    ~Fraction(){
        cout<<"Destructor called"<<endl;  //destructor called
    }
    double getFraction(double num,double denom);
    void setFraction(double x,double y) const;
    void check(double x,double y);
    private:
    double num,denom;
};
void Fraction::setFraction(double x,double y)const{
    
}