#include <iostream>
#include <iomanip>
using  namespace std;
int main(){
    int score,sum=0,counter=0; double average;
    while(counter<4){
        cout<<"Enter the next score(between 0 and 100): ";
        cin>>score;
        sum+=score;
        counter++;
    }
    average=double(sum)/4;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The average of score is: "<<average;
    return 0;
}