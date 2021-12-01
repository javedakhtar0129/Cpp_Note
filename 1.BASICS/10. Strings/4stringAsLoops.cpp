#include<iostream>
#include<string>
using namespace std;
int main(){
    string X("abcdefghijklmnopqrstuvwxyz");
    //strings are arrays,so we can also loop through them
    for(int i=0;i<X.length();i++){
        cout<<X.at(i)<<"   "<<X[i]<<endl;
    }
    return 0;
}