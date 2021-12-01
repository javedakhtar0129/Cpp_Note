#include <iostream>
using namespace std;
void fun();
int main(){
    fun();
    fun();
    fun();
   return 0;
}
void fun(){
    auto int x=1;
    static int y=2;
    x++;y++;
    cout<<"x is: "<<x<<endl<<"y is: "<<y;
}