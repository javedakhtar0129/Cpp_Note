#include<iostream>
using namespace std;
class Address{
    private:
    string houseNo,zipCode;
    string streetName,cityName,stateName;
    public:
    Address(string x,string a,string b,string c,string y){
        houseNo=x;
        zipCode=y;
        streetName=a; 
        cityName=b;
        stateName=c;
    } 
    ~Address(){ }
    void address(void) const;
};
void Address::address(void) const{
    cout<<"Address is:- "<<endl;
    cout<<houseNo<<","<<streetName<<","<<cityName<<","<< stateName<<endl<<
    zipCode;
}

int main(){
    Address a("221-B","Baker street","London","England","007");
    a.address();
    return 0;
}