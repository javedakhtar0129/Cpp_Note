#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string x("hciyfAAAuewbcgilZZZcwjrhgsnaBBBopzxxc[]{]}||,.!@#$%^&*()_+=kodq");
    cout<<x<<endl;
    sort(x.begin(),x.end());
    cout<<x<<endl;
    return 0;
}