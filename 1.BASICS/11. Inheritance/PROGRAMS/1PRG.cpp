#include<iostream>
using namespace std;
  
class Square{ 
    public:
    double side;
    Square(double length);
    double getPeri(void);
    double getArea(void);
    //~Square();
};
class Cube : public Square{   //Inherited Class   
    public:
    Cube();
    double getArea(void);
    double getVolume(void);
    //~Cube();
};
Square::Square(double length){   //Constructor
    side=length;
}
double Square::getPeri(){
    return 4*side;
}
double Square::getArea(){
    return side*side;
}

double Cube::getArea(){
    return side*side*6;
}
double Cube::getVolume(){  
    return side*side*side;
}


int main(){
    Square obj1(12.2);
    Cube obj2;

    cout<<"Square Perimeter: "<<obj1.getPeri()<<endl;
    cout<<"Square Area: "<<obj1.getArea()<<endl;
    cout<<"Cube Area: "<<obj2.getArea()<<endl;
    cout<<"Cube Volume: "<<obj2.getVolume()<<endl;

    return 0;

}