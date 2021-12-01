#include<iostream>
using namespace std;

int main(){
    int day;
    cout<<"Enter day: ";
    cin>>day;
    switch(day){
        case 1:cout<<"Monday";
        break;
        case 2:cout<<"Tuesday";
        break;
        case 3:cout<<"Wednesday";
        break; //from now print will be continous
        case 4:cout<<"Thursday"<<endl; 
        case 5:cout<<"Friday"<<endl;
        case 6:cout<<"Saturday"<<endl;
        case 7:cout<<"Sunday"<<endl;
        default:cout<<"Oooga booga huu huu";
    }
    return 0;
}