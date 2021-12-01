#include"date.h"
#include<iostream>
using namespace std;

//Parameter Constructor
Date::Date(int m,int d,int y):month(m),day(d),year(y){
    if((month<1)||(month>12)){
        cout<<"Month is out of range. ";
        assert(false);
    }
    int daysInMonths[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if((day<1)|| (day>daysInMonths[month])){
        cout<<"Days out of range! ";
        assert(false);
    }
    if((year<1900)||(year>2099)){
        cout<<"Year out if range. ";
        assert(false);
    }
}
Date::~Date(){

}

void Date::print()const{
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}

