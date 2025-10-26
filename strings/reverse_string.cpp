#include <iostream>
using namespace std;


int main(){
    // reverse the string
    string s = "satyam";
    int start = 0, end = s.size()-1;

    while(start<end){
        swap(s[start],s[end]);
        start++, end--;
    }

    cout<<s;

    // find size of string
    int size = 0;
    while(s[size] != '\0'){
        size++;
    } 
    cout<<endl;
    cout<<size<<endl;

    // check if a string is palindrome or not
    string s2 = "naman";
    start = 0, end = s2.size()-1;
    while(start<end){
        if(s2[start] != s2[end]){
            cout<<"Not a Palindrome";
            return 0;
        }
        start++, end--;
    }
    cout<<"Palindrome";

    return 0;
}