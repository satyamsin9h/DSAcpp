#include<iostream>
using namespace std;
//Program to convert decimal no. to binary no.
int main(){
    int n, sum=0, mul=1;
    cout<<"n:";
    cin>>n;
    while(n){
        int digit = n % 2;
        sum = sum + digit*mul;
        n /= 2;
        mul *= 10;
    }

    cout<<sum;
    return 0;
}