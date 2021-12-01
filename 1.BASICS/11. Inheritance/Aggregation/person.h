#ifndef PERSON_H
#define PERSON_H
#include "date.h"
using namespace std;

//Definition of person class
class Person{
    private:
    long identity;
    Date birthdate;
    
    public: 
    Person(long identity,Date birthDate);
    ~Person();
    void print() const;
};
#endif