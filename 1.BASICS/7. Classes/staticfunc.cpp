#include<iostream>
using namespace std;
//Class Declaration
class Box{
    private:
    double length,breadth,height;
    public:
    static int objectcount;   /*Here I have used a static function*/
    Box(double l=2.0,double b=2.0,double h=2.0){
        cout<<"Constructor called"<<endl;//constructor
        length=l;
        breadth=b;
        height=h;
        objectcount++;
    }    
    ~Box(){                                    //destructor
        cout<<"Destructor arrived"<<endl;
    }
    double volume();    //member 
};
double Box::volume(){   //member declaration
    return length*breadth*height;
}
int Box::objectcount=0;
//main function
int main(){
    Box a(3,3,3),b;
    cout<<"Volume is: "<<a.volume()<<endl<<"Object count: "<<a.objectcount<<endl;
    return 0;
}


