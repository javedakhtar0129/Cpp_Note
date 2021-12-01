#include<string>
#include<iostream>

using namespace std;

int main()
{
   string line;
   cout<<"Enter your line with '#' delimiter: " <<endl;
   getline(cin,line,'#');
   for(int i=0;i<line.length();i++){
       line.at(i)=toupper(line.at(i));
   }
   cout<<"You line in upper case is: "<<endl;
   cout<<line<<endl;

   return 0;
}