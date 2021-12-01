#include<iostream>
using namespace std;
struct apple{
    string brand,model; int year;
    apple(string x,string y,int z){
       brand=x; model=y ; year=z; 
    }   
    apple() {cout<<"I am buying a new M1 macbook air!";}    
};
int main(){
    apple jlk;cout<<endl;
    apple apple1("Apple","Macbook air",2020);
    apple apple2("Apple","macbook pro m1",2021);
    cout<<apple1.brand<<" "<<apple1.model<<" "<<apple1.year<<endl;
    cout<<apple2.brand<<" "<<apple2.model<<" "<<apple2.year<<endl;
    return 0;
}