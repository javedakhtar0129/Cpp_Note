#include<iostream>
#include<cmath>
using namespace std;
class Quadratic{
    private:
    float a,b,c;
    public:
    Quadratic(float a,float b,float c);
    ~Quadratic();
};

Quadratic::Quadratic(float a,float b,float c){
    a=a; b=b; c=c;
    cout<<endl<<"Equation is: "<<a<<"x^2 + "<<b<<"x + "<<c<<endl;
    float D=pow(b,2)-4*(a*c);
    if(D==0){
        cout<<"Same roots, that is x1=x2="<<b/(2*a);
    }
    else if(D<0){
        cout<<"There are no real root";
        exit(0);
    }
    else if(D>0){
        cout<<"Two real roots that is :"<<endl;
        cout<<"x1= "<<(b+sqrt(D))/(2*a*c)<<"   and   x2= "<<(b-sqrt(D))/(2*a*c)<<endl;
    }
}

int main(){
    Quadratic(1,6,1);
    return 0;
}