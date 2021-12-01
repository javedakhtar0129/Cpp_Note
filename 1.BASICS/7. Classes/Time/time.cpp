#include<iostream>
#include <cassert>
#include "time.h"
using namespace std;

Time::Time(int hr,int min,int se):hours(hr),minutes(min),seconds(se){
    normalize();
}

Time::Time():hours(0),minutes(0),seconds(0){

}
Time::~Time(){

}

void Time::print() const{
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
}

void Time::tick(){
    seconds++;
    normalize();
}

void Time::normalize(){
    if((hours<0)||(minutes<0)||(seconds<0)){
        cout<<"Data are not valid. Need to quit!"<<endl;
        assert (false); 
    }
    else if(seconds>59){
        int temp=seconds/60; seconds=seconds%60; minutes=minutes+temp;
    }
    else if (minutes>59){
        int temp=minutes/60; minutes=minutes%60; hours=hours+temp;
    }
    else if (hours>23){
        hours=hours%24; 
    }
}

//Main function begins Finally!!!
int main(){
    Time timea(5,32,45);
    cout<<"Original time:";
    timea.print();
    for(int i=0;i<143500;i++){
        timea.tick();
    }
    cout<<"Time after 143500 ticks: ";
    timea.print();   
    return 0;
}