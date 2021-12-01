/*Ask someone about how not to take another y
and rather stick with x for inputting another value*/
#include <iostream> 
using namespace std;
int main(){
    bool x,y;
    cout<<"Enter true or false for flag: "<<endl;
    cin>>boolalpha>>x;
    cout<<x;

    cout<<endl<<"Now put 0 or 1: "<<endl;
    cin>>x;
    cout<<boolalpha<<x;
    return 0;
}