/*
NAME:- JAVED AKHTAR
ROLL NUMBER:- 205808
 */
#include<iostream>
#define MAX_SIZE 10
using namespace std;

class List{
    private:
        int A[MAX_SIZE], size;
    public:
        List(){ cout<<"Constructor called"<<endl; size=0;}
        List(List &SET); //Using Copy Constructor
        void SetList();
        void printList();
        void operator+(List &SET); //Union
        void operator-(List &SET); //Difference
        void operator^(List &SET); // Intersection 
        ~List(){ cout<<endl<<"Destructor called";}
};

List::List(List &SET){
    for(int i=0; i<size; i++){
        A[i]=SET.A[i];
    }
}

void List::SetList(){
    cout<<endl<<"Enter Size of List: ";
    cin>>size;
    if(size==0){
		cout<<"NULL SET"<<endl;
        cout<<"Enter again!!"<<endl;
        exit(0);
	}
	else{
	   cout<<"Assign elements in list: "<<endl;
       for(int i=0; i<size; i++){
            cin>>*(A+i);
        }
   }
}

void List::printList(){
	cout<<endl<<"Elements are: [";
    for(int i=0; i<size; i++){
            cout<<*(A+i)<<",";
        }
    cout<<"]";
}
//UNION
void List::operator+(List &SET){
    bool error=false;
    cout<<"Union is: [";
    for(int i=0; i<size; i++){
        cout<<*(A+i)<<" , ";
    }
    for(int j=0; j<SET.size; j++){
        
        for(int i=0;i<size; i++){
            if(*(A+i)==SET.A[j]){
                error=true;
                break;
            }
        }
        if(!error){
                cout<<SET.A[j]<<" , ";
            }
    }
    cout<<"]"<<endl;
}
//DIFFERENCE
void List::operator-(List &SET){
    cout<<"Difference is: [";
    bool error=false;
    for(int i=0; i<size; i++){
       for(int j=0; j<SET.size; j++){
            if(A[i]==SET.A[j]){
                  error=true;
                  break;
                }
        } 
        if(!error){	
            cout<<A[i]<<" , ";
        }
    }
    cout<<"]"<<endl;       
}
//INTERSECTION
void List::operator^(List &SET){
    bool error=false;
	cout<<"Intersection is: [";
	for(int i=0;i<size;i++){
		for(int j=0;j<SET.size;j++){
			if(A[i]==SET.A[j]){
				error=true;
				break;
			}	
		}
		if(!error){
			cout<<A[i]<<",";
		}
	}
	cout<<"]"<<endl;
}
//Main Function
int main(){

	List First, Second;
	First.SetList();
    First.printList();
    cout<<endl;
	Second.SetList();
    Second.printList();
    cout<<endl;
    //Now Our Operations
	First+Second;   //Union
	First-Second;   //Difference
    First^Second;   //Intersection
	return 0;
}