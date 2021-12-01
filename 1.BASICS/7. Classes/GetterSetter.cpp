#include<iostream>
#include<cassert>
using namespace std;

double area(double l,double h){
    return l*h;
}
double peri(double l,double h){
    return 2*(l+h);
}

class Rectangle{
    private:
    double height,length;
    public:
    Rectangle(double length,double height); //constructor 
    Rectangle(const Rectangle& rect);    //copy constructor
    ~Rectangle();  //destructor
    void print() const;
    double getarea() const;
    double getperimeter() const; 
};
Rectangle::Rectangle(double len,double hgt):length(len),height(hgt){
    if((length<=0.0)||(height<=0.0)){
        cout<<"No rectangle can be made "<<endl;
        assert(false);
    }
}
//copy constructor
Rectangle::Rectangle(const Rectangle& rect):length(rect.length),height(rect.height){
}
//destructor
Rectangle::~Rectangle(){}
//delaring member function
void Rectangle::print() const{
    cout<<" 'Lenght is: "<<length<<" & Height is: "<<height<<"'"<<endl;
}
double Rectangle::getarea()const{
    return area(length,height);
}

double Rectangle::getperimeter()const{
    return peri(length,height);
}
int main(){
    Rectangle rect1(3.0,4.2),rect2(5.1,10.2),rect3(rect2);
    cout<<"Rectangle 1 ";rect1.print();
    cout<<"Area: "<<rect1.getarea()<<endl
    <<"Perimeter: "<<rect1.getperimeter()<<endl<<endl;

    cout<<"Rectangle 2 ";rect2.print();
    cout<<"Area: "<<rect2.getarea()<<endl
    <<"Perimeter: "<<rect2.getperimeter()<<endl<<endl;

    cout<<"Rectangle 1 ";rect3.print();
    cout<<"Area: "<<rect3.getarea()<<endl
    <<"Perimeter: "<<rect3.getperimeter()<<endl<<endl;
    return 0;
}