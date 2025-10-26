#include<iostream>
using namespace std;
//Program to print 1's complement of a binary number
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    int sum = 0,bit,mul=1;
    while(n){
        int rem = n%10;
        bit = 1^rem ;  //XOR operation
        sum = sum + bit*mul;
        n /= 10;
        mul *= 10;
    }
    cout<<sum;
    return 0;
}