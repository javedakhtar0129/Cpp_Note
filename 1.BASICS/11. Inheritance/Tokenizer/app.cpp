#include "tokenizer.h"
#include<iostream>
using namespace std;

int main(){
    //The target string that needs to be tokenzid
    string target ("This is a string to be tokenized. \n");
    // The delimit string defines the set of separators
    string delimit (" \n"); // Delimiter made of ' ' and '\n'

    //Initiazization of tokenizer object
    Tokenizer tokenizer(target, delimit);

    // Traversing the target string to find token
    while(tokenizer.moreToken()){

        cout<<tokenizer.nextToken<<endl;
    }

    return 0;
}