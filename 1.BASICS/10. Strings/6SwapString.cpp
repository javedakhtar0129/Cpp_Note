#include<iostream>
#include<string>
using namespace std;
int main(){
    string one("Apples");
    string two("Oranges");
    
    cout<<one<<" "<<two<<endl;
    one.swap(two);
    cout<<one<<" "<<two<<endl;

    return 0;
}