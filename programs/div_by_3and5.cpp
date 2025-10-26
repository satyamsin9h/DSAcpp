#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"num:";
    cin>>num;
    /*if(num%3 == 0){
        if(num%5 == 0)
        cout<<"Perfect";
        else
        cout<<"Not Perfect";
    }
    else
        cout<<"Not Perfect";*/
    if(num%3==0 && num%5==0)
    cout<<"Perfect";
    else
    cout<<"Not Perfect";
    return 0;
}