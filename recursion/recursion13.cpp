#include<iostream>
using namespace std;

void rev(string &str, int start, int end){
    // base case
    if(start >= end) return;
    
    // swap
    char c = str[start];
    str[start] = str[end];
    str[end] = c;

    return rev(str, start+1, end-1); 
}

int main(){
    // Count Vowels in string
    string str = "satyam";

    rev(str,0,5);
    cout<<str;


    return 0;
}