#include<iostream>
using namespace std;

//Program to check if a number is prime or not using for loop
int main(){
    int num;
    cout<<"num:";
    cin>>num;
    if(num<2){
        cout<<"Not Prime";
    }
    else{
        for(int div=2;div<=num/2;div++){
             if(num%div==0){
                    cout<<"Not Prime";
                    return 0;   
                }
           }
        cout<<"Prime";
    }
    return 0;
}