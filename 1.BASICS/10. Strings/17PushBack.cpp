#include<iostream>
#include<string>

using namespace std;

int main(){
    string str("My name is JAVED AKHTAR ");
    string one("qwert efes sdgvgfh dsfsf adc ");
    //strg.append (temp); 
    //strg.insert (pos1, temp); 
    //strg.replace (pos1, n1, temp); 
    //strg.assign (temp);
    cout<<str+one<<endl;
    str+=one;
    cout<<str;
    return 0;
}