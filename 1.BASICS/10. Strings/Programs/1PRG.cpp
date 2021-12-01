#include<string>
#include<iostream>
using namespace std;

int main(){
    string X;
    int sum=0; bool error=false;
    cout<<"Enter your string below: ";
    getline(cin,X);
    cout<<"Total length: "<<X.length()<<endl;
    for(int i=0;i<X.length();i++){
        if(X[i]==' '){
            error=true;
            sum++;
            sum+=sum;
            break;
        }
    }
   
    if(error==true){
        cout<<"Total whitespaces were: "<<sum<<endl;
        cout<<"Total number of charachters is: "<<X.length()-sum;
    }

    return 0;
}
