#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream javedFile;
    javedFile.open("tuna.txt");
    if(javedFile.is_open()){
        cout<<"File is opened! Hurrays!!";
    }
    else{cout<<"You messed up";}
    javedFile<<"I love tuna and tuna loves me!"<<endl;
    javedFile.close(); //Or we can use this "void close();"   
    return 0;
}
