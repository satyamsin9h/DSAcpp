#include<iostream>
using namespace std;
//Program to reverse a given integer
int main(){
    int num;
    cout<<"num:";
    cin>>num;
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

    cout<<"Reverse of num = "<<sum*sign;
    return 0;
    
}