#include "people.h"
#include "birthday.h"
#include<iostream>
using namespace std; 
/* This two dots after paranthesis we did is called memeber initializer,
We have to do this everytime we are using an object of a class 
inside a another class   */

People::People(string x, Birthday bo):name(x),dateOfBirth(bo) //member initializer
{
     
}

void People::printinfo(void) const{
    cout<<name<<" was born on ";
    dateOfBirth.printDate();
}