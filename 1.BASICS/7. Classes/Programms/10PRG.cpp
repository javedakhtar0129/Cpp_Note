#include<iostream>
#include<cmath>
using namespace std;
class Complex{
    private:
    int x,y;
    public:
    Complex(int x,int y);
    void add(void);
};
Complex::Complex(int x,int y){
    x=x;y=y;
    cout<<"Host complex number is  2 + i3";
    void add(void);

}
void Complex::add(void){
    cout<<"(2 + i3)"<<"+ ("<<x<<" + "<<"i"<<y<<")";
}

int main(){
    Complex(5,7);
  
    return 0;
}