#include<iostream>
using namespace std;
int main(){
    int score;char grade;
    do{
        cout<<"Enter score 0 to 100: ";
        cin>>score;
    }
    while(score>100 || score<0);
    switch(score/10){
        case 10:grade='A';break;
        case 9:grade='B';break;
        case 8:grade='C';break;
        case 7:grade='D';break;
        case 6:grade='F';break;
        default:
        cout<<"Failed";    
    }
    if(grade=='A'||grade=='B'||grade=='C'||grade=='D'||grade=='F'){
    cout<<"The grade is: "<<grade<<endl;}
    return 0;
}