#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream infile;
    int num; bool flag;
    infile.open("numbers.dat");
    flag=false;
    while(infile>>num && !flag)
    {
        if(num>=150)
        {
            cout<<"The number is: "<<num;
            flag=true;
        }
    }
    if(!flag)
    {
        cout<<"The number was not found!";
    }
    infile.close();
    return 0;
}