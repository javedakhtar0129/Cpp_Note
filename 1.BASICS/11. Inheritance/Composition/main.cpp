#include<iostream>
#include "people.h"
#include "birthday.h"
using namespace std;

int main(){
    Birthday birthObj(6,20,2001);
    People Peopleobj("JAVED AKHRAR",birthObj);

    birthObj.printDate();
    Peopleobj.printinfo();

    return 0;
}