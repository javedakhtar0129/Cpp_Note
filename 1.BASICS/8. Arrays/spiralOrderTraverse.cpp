#include<iostream>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
    int n,m;
    cout<<"Enter n and m i.e. n x m: "<<endl;
    //cin>>n>>m;
    n=9;m=6;
    int A[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            A[i][j]=(rand()%100)+1;
        }
    }
    cout<<"Your random Two dimension matrix is: "<<endl;;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    //Printing spiral
    int row_start=0,row_end=n;
    int col_start=0,col_end=m;
    cout<<"Printing Spiral Order Matrix Transversal: "<<endl;
    while(row_start<row_end && col_start<col_end){
        //For Row start(Horizontal)
        for(int j=col_start;j<col_end;j++){
            cout<<A[row_start][j]<<"  ";
        }
        row_start++;
        //For column end(Vetical)
        for(int i=row_start;i<row_end;i++){
            cout<<A[i][col_end]<<"  ";
        }
        col_end--;
        //For Row Reverse(Horizontal)
        if(row_start<row_end){
        for(int j=col_end-1;j>=col_start;j--){
            cout<<A[row_end][j]<<"  ";
        }
        row_end--;
        }
        //For Column Reverse(Vertical)
        if(col_start<col_end){
        for(int i=row_end-1;i>=row_start;i--){
            cout<<A[i][col_start]<<"  ";
        }
        col_start++;
        }
    }


    return 0;
}