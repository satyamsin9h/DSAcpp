#include<iostream>
using namespace std;

int main(){

    for(int row=1 ; row<=5 ; row++){
        for(int col=1 ; col<=row ; col++){
            char ch = 'a' + col -1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}