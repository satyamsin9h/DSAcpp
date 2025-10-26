#include<iostream>
using namespace std;

bool checkpal(string str, int start, int end){
    // base case
    if(start >= end) return 1;

    if(str[start] != str[end]) return 0; // not matched

    return checkpal(str,start+1,end-1); // matched
}

int main(){
    // Check Palindrome
    string str = "naman";

    cout<<checkpal(str,0,4);


    return 0;
}