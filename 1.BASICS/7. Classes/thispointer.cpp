#include<iostream>
using namespace std;
class Test{
    int x;
    public:
    void setX(int x){
        (*this).x = x; 
    }
    void print(){cout<<"x= "<<x<<endl<<(*this).x; }
};
int main(){
    Test obj1;
    int x=20;
    obj1.setX(x);
    obj1.print();
    return 0;
}
