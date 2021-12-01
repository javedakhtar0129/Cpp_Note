#include <iostream>
using namespace std;
int main(){
    int array[4]={10,20,30,40} ;
    string cars[4]={"BMW","Volvo","TATA","Tesla"};
    cout<<cars[0]<<endl;;
    cout<<cars[1]<<endl;
    cars[1]="Alooo";
    cout<<cars[1]<<endl;


    cout<<array[0]<<endl;
    cout<<array[1]<<endl;
    cout<<array[2]<<endl;
    cout<<array[3]<<endl;
    return 0;
}