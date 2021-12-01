#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#include<iostream>
using namespace std;

class Birthday{
    private:
    int month;
    int day;
    int year;
    
    public: 
    Birthday(int m, int d, int y);
    void printDate(void) const;

     
};

#endif