#include <iostream>
using namespace std;
void printarray(int kuchbhi[],int size);

int main(){
    int A[3]={20,30,69};
    printarray(A,3);
    return 0;
}

void printarray(int kuchbhi[],int size){
    for(int i=0;i<size; i++){
        cout<<kuchbhi[i]<<endl;
    }
}
