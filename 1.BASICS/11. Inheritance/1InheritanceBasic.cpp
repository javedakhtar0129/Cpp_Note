#include<iostream>
using namespace std;

class Employee{
    private:    
    string name;
    public:
    int ID;
    float salary;
    Employee(){}
    Employee(int inpID){ 
        ID=inpID; salary=34.0; 
    }
};
//Derived Class Syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}} {

} */
//creating a derived class from parent class
//Default visibility mode is private
//In any case private membes of base class is not inherited
class Programmer : public Employee{
    public: 
    int languageCode=9;
};

int main(){
    Employee JAVED(1),BABURAO(2);
    cout<<JAVED.salary<<endl;
    cout<<BABURAO.salary<<endl;
    Programmer code;
    cout<<code.languageCode;
    return 0;
}