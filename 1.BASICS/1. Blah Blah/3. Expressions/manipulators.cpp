#include<iostream>
using namespace std;
//showpos is for + sign //scientific is for exponential
//showpoint is for point decimal
int main(){
    double x=1237, y=12376745.5623;
    cout<<"x in fixed_point format: "<<x<<endl;
    cout<<"x on fixed_point format: "<<showpoint<<x<<endl;
    cout<<"x in scientific format: "<<scientific<<x<<endl;
    cout<<"y in scientific format: "<<showpos<<scientific<<y;
    return 0;
}
