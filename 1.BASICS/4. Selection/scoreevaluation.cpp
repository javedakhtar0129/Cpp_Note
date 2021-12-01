#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3,max,min,average;
    cout<<"Enter your three scores: ";
    cin>>n1>>n2>>n3;
    //maximum
    if(n1>n2){
        if(n1>n3){max=n1;}
        else{max=n3;}
    }
    else if(n2>n1){
        if(n2>n3){max=n2;}
        else{max=n3;}
    } cout<<"max score is: "<<max<<endl;
    //minimum
    if(n1<n2){ 
        if(n1<n3){min=n1;}
        else{min=n3;}
    }
    else if(n2<n1){
        if(n2<n3){min=n2;}
        else{min=n3;}
    }
    cout<<"The three scores were: "<<n1<<" "<<n2<<" "<<n3<<endl;
    cout<<"min score is: "<<min<<endl;
    cout<<"max + min score: "<<max+min<<endl;
    cout<<"average score: "<<(max+min)/2<<endl;
    
    return 0;
}