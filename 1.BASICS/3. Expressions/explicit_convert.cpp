#include <iostream>
using namespace std;
//static_cast
int main(){
    double x=23.56; int y=30; //Declaration

    cout<<"Without casting: "<<x+y<<endl; //Alowing implicit convertion
    cout<<"With casting: "<<static_cast<int>(x)+y<<endl; //Forcing explicit conversion
    return 0;
}