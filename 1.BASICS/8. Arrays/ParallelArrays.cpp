#include<iostream>
#include<iomanip>
using namespace std;

void findGrades(const int scores[],char grades[], int size[]){
    char temp[ ]={'F','F','F','F','F','F','D','C','B','A','A'};
    for(int i=0;i<size;i++){
        grades[i]=temp[scores[i]/10];
    }
    return;
}
int main(){
    string names[4]={"George","Kutty","Tony","Stark"};
    int scores[4]={82,93,71,67};
    char grades[4];
    //Calling Function
    findGrades(scores,grades,5);
    //Printing result in all three arrows with headers
    for(int i=0;i<4;i++){
        cout<<setw(10)<<left<<names[i]<<"  "<<setw(2);
        cout<<scores[i]<<"  "<<setw(2)<<grades[i]<<endl;
    }
    return 0;
}

