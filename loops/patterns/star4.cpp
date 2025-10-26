#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"n:";
    cin>>n;

    for(int row=n ; row>=1 ; row--){
        for(int col=1 ; col<=n-row+1 ; col++){
            cout<<" ";
        }
        for(int col=2*row-1 ; col>=1 ; col--)
            cout<<"*";

            cout<<endl;
    }
    return 0;
}