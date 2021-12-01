#include<iostream>
#include<iomanip>
using namespace std;

class Classsroom{
    private:
    string names;
    int score;
    int grade;
    public:
    Classsroom(){ cout<<"Constructor called";}
    void GetGrades(string names,int score);
    ~Classsroom(){cout<<"Destructor called";};
};
void Classroom::GetGrades(string names,int score){
    char gradesheet[]={'F','F','F','F','F','F','D','C','B','A','A'};
    grade=gradesheet[score/10];
}
int main(){
    
    return 0;
}