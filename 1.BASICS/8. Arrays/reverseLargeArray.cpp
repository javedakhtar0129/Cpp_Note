//Isme bada doubt hai??,Files kaise open hoti hai???!!!!!!
//
//
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int numbers[50];
    int size=0;
    ifstream inputFile;
    ofstream outputFile;
    //opening the input file
    inputFile.open("inFile.txt");
    if (!inputFile){
        cout<<"Error.Input file cannot be opened"<<endl
        <<"The programm is terminated";
        return 0;
    }
// Reading the list of numbers from the input file into array    
while(inputFile>>numbers[size]&& size<=50){
    size++;
}
//Closing the input file
inputFile.close();
//Opening the output file
outputFile.open("outFile.txt");
if(!outputFile){
    cout<<"Error.Output file cannot be opened"<<
    "The programm is terminated";
    return 0;
}
//Writing the element of the reversed array into the outout file
for(int i=size-1 ;i>=0 ;i--){
    outputFile<<numbers[i]<<" ";
}
//Closing the output file
outputFile.close();

    return 0;
}