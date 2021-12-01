#include <iostream>
#include <string>
using namespace std;

class BuckyClass{
    public:
    void SetName(string x){
        name=x;
    }
    string ppName(){
        return name;
    }
     private:
     string name;
};
int main(){
    BuckyClass bo;
    bo.SetName("Sir bucky wllace");
    cout<<bo.ppName();
    return 0;
}