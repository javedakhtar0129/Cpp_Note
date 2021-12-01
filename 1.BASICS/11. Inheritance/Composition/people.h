
#include<string>
#include "birthday.h"
using namespace std;
#ifndef PEOPLE_H
#define PEOPLE_H

class People{
    public:
    People(string x, Birthday bo);
    void printinfo(void) const;
 
    private:
    string name; 
    Birthday dateOfBirth;

};

#endif