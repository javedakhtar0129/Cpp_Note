#include<iostream>
using namespace std;

int main(){
    int x,sum=0;
    srand(time(0));
    //5 sets of each 10 random numbers then sum of those numbers;
    cout<<endl<<"First set of Random numbers are: ";
    for(int i=0;i<10;i++){
        x=(rand()%(99-10+1))+10;
        cout<<x<<" ";
        sum+=x;
    }
    cout<<endl<<"Sum of first set: "<<sum<<endl<<endl;
    sum=0;

    cout<<"second set of Random numbers are: ";
    for(int i=0;i<10;i++){
        x=(rand()%(99-10+1))+10;
        cout<<x<<" ";
        sum+=x;
    }
    cout<<endl<<"Sum of second set: "<<sum<<endl<<endl;
    sum=0;

    cout<<"third set of Random numbers are: ";
    for(int i=0;i<10;i++){
        x=(rand()%(99-10+1))+10;
        cout<<x<<" ";
        sum+=x;
    }
    cout<<endl<<"Sum of third set: "<<sum<<endl<<endl;
    sum=0;

    cout<<"Fourth set of Random numbers are: ";
    for(int i=0;i<10;i++){
        x=(rand()%(99-10+1))+10;
        cout<<x<<" ";
        sum+=x;
    }
    cout<<endl<<"Sum of fourth set: "<<sum<<endl<<endl;
    sum=0;

    cout<<"Fifth set of Random numbers are: ";
    for(int i=0;i<10;i++){
        x=(rand()%(99-10+1))+10;
        cout<<x<<" ";
        sum+=x;
    }
    cout<<endl<<"Sum of fifth set: "<<sum<<endl<<endl;
    sum=0;

    return 0;
}