#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int A[10];
    int smallest=INT_MAX,largest=INT_MIN;
    srand(time(0));
    //Asigning numbers
    for(int i=0;i<10;i++){
       *(A+i)=((rand()%100)+1);
    }
    //Printing numbers
    cout<<"List of 10 random numbers are: ";
    for(int i=0;i<10;i++){
        cout<<*(A+i)<<"  ";
    }
    //Finding the smallest number
    for(int i=0;i<10;i++){
        if(A[i]<smallest){
            smallest=A[i];
        }
    }
    cout<<endl<<"Smallest number is: "<<smallest<<endl;
    for(int i=0;i<10;i++){
        if(A[i]>largest){
            largest=A[i];
        }
    }
    cout<<"Largest number is: "<<largest<<endl;
    

    return 0;
}