#include<iostream>

using namespace std;
//INCOMPLETE
int main(){
    int y,x;
    srand(time(0));;
    for(int i=0;i<10;i++){
        x=((rand()/8889)+1111);
        while(x==0){
            y=x%10;
            if(y==0){ i++;}
            x=x/10;
        }

    cout<<x<<"  ";
    }

    return 0;
}