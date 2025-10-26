#include<iostream>
using namespace std;

//Program to print nth term of fibonacci series
int main(){
    int n;
    cout<<"n:";
    cin>>n;

    int first_num = 0;
    int second_num = 1;
    int current;
    if(n==1) {
        cout<<"nth term = "<<first_num;
        return 0;
    }
    if(n==2) {
        cout<<"nth term = "<<second_num;
        return 0;
    }
    for(int i=3; i<=n ; i++){
        current = first_num + second_num;
        first_num = second_num;
        second_num = current;
    }
    cout<<"nth term = "<<current;
    return 0;
}