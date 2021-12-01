#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream InFile;  //creating a class object for only writing i.e. Inputting
    InFile.open("INPUT.txt");

    if(InFile.is_open()){
        cout<<"File is opened,Relax!"<<endl;
    }
    else{ cout<<"File is not opened"<<endl;}

    InFile<<"1"<<endl; //integer
    InFile<<"2"<<endl;  //integer
    InFile<<"Babu"<<endl;   //string
    InFile.close();
    ifstream OutFile;  //creating a class object for only reding purposes 
    OutFile.open("INPUT.txt");

    string x,y; string z;
    OutFile>>x>>y>>z;
    cout<<"first: "<<x<<endl;
    cout<<"Second: "<<y<<endl;
    cout<<"Third: "<<z<<endl;
    
    OutFile.close();

    return 0;
}