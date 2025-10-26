#include<iostream>
using namespace std;

int main(){

    //print even nos
    int count;
    cin>>count;
    for(int num=1;num<=count;num++){
        if(num%2==0)
            cout<<num<<" ";
    }
    return 0;
}