#include<iostream>
using namespace std;

int main(){

    //sum of n naural nos
    int n;
    cin>>n;
    int sum=0;
    for(int num=1;num<=n;num++){
        sum = sum + num;
    }
    cout<<"The sum is:"<<sum;
    return 0;
}