#include<iostream>
using namespace std;

int main(){
    int k=1;
    for(int row=1 ; row<=5 ; row++){
        for(int col=1 ; col<=5 ; col++){
            cout<<k<<" ";
            k++;
        }
            cout<<endl;
    }
    return 0;
}