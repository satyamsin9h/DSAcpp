#include<iostream>
using namespace std;
//Program to print no. of digits of a given integer
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    int digit = 0;

    while(n){
        n = n/10;
        digit++;
    }

    cout<<"No. of digits = "<<digit;
    return 0;
}
