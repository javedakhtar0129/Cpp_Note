//cstring

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[]={'a','b','c','d'};  //Non-constant
    char str1[]=("abcd");

    char *ptr=str1;
    for(int i=0;i<4;i++){
        cout<<*(ptr+i)<<"  "<<endl;
    }
    cout<<endl<<(ptr+1)<<endl;

    return 0;
}
