#include<iostream>
using namespace std;
int main(){
    int size,item;
    bool success=false;
    do{
        cout<<"Enter size: ";
        cin>>size;
    }while(size<=0);
for(int i=1;(i<=size) && (!success);i++){
    cout<<"Enter the next item: ";
    cin>>item;
    success=(item%7==0);
}
if(success){
    cout<<"The number "<<item<<" is divisible bt 7."<<endl;
}
else{
    cout<<"None of the numbers are divisible by 7.";
}
return 0;
}