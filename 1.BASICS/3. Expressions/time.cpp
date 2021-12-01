#include<iostream>
using namespace std;
int main(){
    int time;
    cout<<"Enter your number of seconds: "<<endl;
    cin>>time;
    cout<<endl<<"Your time in hours and stuff is: "<<endl
    <<time/(60*60)<<" hours and "<<(time%(60*60))/60<<" minutes "<<(time%(60*60))%60<<" seconds";
    return 0;
}