#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int DectoOct(int octal);
int main(){
    srand(time(0));
    int octalsize;
    int* Octal= new int[octalsize];
    cout<<"Enter number of octal number to be printed: ";
    cin>>octalsize;
    //Creating octal number
    for(int i=0;i<octalsize;i++){
        Octal[i]=((rand()%200)+1);
    }
    //Assigning them octal numbers
    for(int i=0;i<octalsize;i++){
        Octal[i]=DectoOct(Octal[i]);
    }
    for(int i=0;i<octalsize;i++){
        cout<<Octal[i]<<" : "<<DectoOct(Octal[i])<<endl;
    }

    return 0;
}

int DectoOct(int octal){
        int decimal = 0, i = 0;
        //converting octal to decimal
        while (octal != 0)
        {
            int rem = octal % 10;
            octal /= 10;
            int res=rem*pow(8,i);
            decimal += res;
            i++;
        }
        return decimal;
    }