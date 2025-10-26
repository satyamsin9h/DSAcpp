#include<iostream>
using namespace std;

void lowertoupper(string &str, int index){
    // base case
    if(index == -1) return;
    
    // convert lower to upper
    str[index] = 'A' + str[index] - 'a';

    return lowertoupper(str, index-1); 
}

int main(){
    // Convert lowercase letter to uppercase letter
    string str = "satyam";

    lowertoupper(str,5);
    cout<<str<<endl;


    return 0;
}