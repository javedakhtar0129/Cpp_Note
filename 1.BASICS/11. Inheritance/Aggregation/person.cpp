#include"person.h"
#include<iostream>
using namespace std;

//constructor
Person::Person(long id,Date bd):identity(id),birthdate(bd){
    assert(identity>111111111 && identity<999999999);
}

//Destructor
Person::~Person(){

}

//Print Function
void Person::print() const{
    cout<<"Person Identity: "<<identity<<endl;
    cout<<"Person date of birth: ";
    birthdate.print();
    cout<<endl<<endl;
}