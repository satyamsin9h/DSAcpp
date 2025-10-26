#include<iostream>
using namespace std;
//Program to convert binary no. to decimal no.
int main(){
    int n, sum=0, mul=1;
    cout<<"n:";
    cin>>n;
    while(n){
        int digit = n % 10;
        sum = sum + digit*mul;
        n /= 10;
        mul *= 2;
    }

    cout<<sum;
    return 0;
}