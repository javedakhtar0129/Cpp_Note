#include<iostream>
using namespace std;
class AbstractEmployee{
    virtual void AskForPromotion()=0;
};
class Employee:AbstractEmployee{
    private:
    int Age;
    string Name,Company;
    public:
    void introduce(void){
        cout<<"Name is: "<<Name<<endl;
        cout<<"Company is: "<<Company<<endl;
        cout<<"Age is: "<<Age<<endl<<endl;
    }
    Employee(string name,string company,int age){
        Name=name;
        Company=company;
        Age=age;
    }
    void setAge(int age);
    int getAge(void) const;
    void AskForPromotion(){
        if(Age>30){
        cout<<endl<<Name<<" IS PROMOTED"<<endl;}
        else{
        cout<<endl<<Name<<" IS NOT PROMOTED"<<endl;}
    }
};
void Employee::setAge(int age){
    if(age<=100){
    Age=age;}
}
int Employee::getAge(void) const{
    return Age;
}

int main(){
    Employee employee1= Employee("RAMU","asda",23);
    employee1.introduce();

    Employee employee2=Employee("KAKA","gng",45);
    employee2.introduce();

    employee1.setAge(99);
    cout<<employee1.getAge();

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    return 0;
}