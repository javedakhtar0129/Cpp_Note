#include <iostream>
using namespace std;

int main(){  
    float inches;
    cout<<"Enter length in inches: "<<endl<<endl;
    cin>>inches;
    cout<<"Your inches in foot: "<<inches/12<<endl;
    cout<<"Your inches in centimeter: "<<inches*2.54<<endl;
    cout<<"Your inches in yard: "<<inches/36<<endl;
    cout<<"Your inches in meter: "<<inches*0.0254<<endl;
    return 0;
}