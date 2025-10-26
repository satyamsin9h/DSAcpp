#include<iostream>
using namespace std;

int count(string str, int index){
    // base case
    if(index == -1) return 0;
    // matched
    if(str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u' ) return 1 + count(str, index-1); 
    // not matched
    else
    return count(str, index-1); 
}

int main(){
    // Count Vowels in string
    string str = "satyam";

    cout<<count(str,5)<<endl;


    return 0;
}