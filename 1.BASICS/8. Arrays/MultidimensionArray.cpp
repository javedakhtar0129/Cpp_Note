#include<iostream>
#include<iomanip>
using namespace std;
//First bracket is Rows //Second bracket is collumn
int main(){
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};  
    //2,3,4
    //8,9,10
    //4,5,6
    cout<<A[2][2]<<endl<<endl;
    //Now doing something advance with it
    for(int row=0;row<3;row++){
        for(int column=0;column<4;column++){
            cout<<setw(3)<<right<<A[row][column]<<" ";
        }
        cout<<endl;
    }
    return 0;
}