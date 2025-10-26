#include<iostream>
using namespace std;
//Program to check if a given no. is palindrome or not
int main(){
    int num;
    cout<<"num:";
    cin>>num;
    int k = num;
    int sum = 0;
    int sign;
    if(num<0){
        sign = -1;
        num = -num;
    }
    else{
        sign = 1;
    }
    
    while(num){
        int digit = num%10;
        sum = sum*10 + digit;
        num = num/10;
    }

    num = sum*sign;
    if(num==k)
    cout<<k<<" is Palindrome";
    else
    cout<<k<<" is not Palindrome";
    return 0;
    
}