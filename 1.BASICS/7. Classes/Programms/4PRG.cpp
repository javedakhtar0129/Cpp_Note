#include<iostream>
using namespace std;

class Person{
    private:
    string name; 
    int age;
    public:
    Person(){}
    ~Person(){}
    void setName(string letters);
    void setAge(double number);
    string getName(void) const;
    double getAge(void) const;
};

void Person::setName(string letters){
    name=letters;
}
void Person::setAge(double number){
    age=number;
}
string Person::getName(void) const{
    return name;
}
double Person::getAge(void) const{
    return age;
}

int main(){
    Person a;
    a.setName("JAVED");
    a.setAge(19);
    cout<<a.getName()<<endl;
    cout<<a.getAge()<<endl;
    return 0;
}