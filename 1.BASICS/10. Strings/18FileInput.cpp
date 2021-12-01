#include<string>
#include<fstream>
#include<iostream>

using namespace std;

int main(){
    ifstream inputfile;
    ofstream outputfile;
    string line;
    inputfile.open("18Input.txt");
    if(inputfile.is_open()){ cout<<"Deine file ist oppan!";}
    else{cout<<"Deine file ist nicht oppan!!"; exit(0);}
    int max=INT_MIN;
    while(inputfile.eof()){
        getline(inputfile,line);
        if(line.length()>max){
            max=line.length();
        }
    }
    inputfile.close();
    inputfile.open ("18Input.txt");
    outputfile.open ("18Output.txt");
    while(!inputfile.eof()){
        getline(inputfile, line);
        string temp(max − line.size(),' '); 
        line.insert (0, temp);
        line.append ("\n");
        outputfile << line;
    }

    return 0;
    
}

