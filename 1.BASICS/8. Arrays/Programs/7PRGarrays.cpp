#include<iostream>
using namespace std;

class Orange{
    private:
    int A[20];
    public:

    void getArray(int size);
    void getEvenArray( int size);
    void getOddArray(int size); 
};
void Orange::getArray(int size){
    for(int i=0;i<size;i++){
        A[i]=i*5;
        cout<<A[i]<<" ";
    }
    
}
void Orange::getEvenArray(int size){
    for(int i=0;i<size;i++){
        A[i]=i*5;
        if(A[i%2==0]){
        cout<<A[i]<<" ";
        }
    }
}
void Orange::getOddArray(int size){
    for(int i=0;i<size;i++){
        A[i]=i*5;
        if(A[!(i%2==0)]){
        cout<<A[i]<<" ";
        }
    }
}
int main(){
    Orange a;
    cout<<"Our Array is: ";
    a.getArray(20); cout<<endl;

    cout<<"Our even Array part is: ";
    a.getEvenArray(20); cout<<endl;
    
    cout<<"Our Odd Array part is: ";
    a.getOddArray(20); cout<<endl;
    return 0;
}

