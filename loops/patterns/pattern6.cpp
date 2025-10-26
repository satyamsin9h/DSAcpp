#include<iostream>
using namespace std;

int main(){
    /*char ch = 'a';
    for(int row=1 ; row<=5 ; row++){
        for(int col=1 ; col<=5 ; col++)
            cout<<ch<<" ";
            ch++;

            cout<<endl;
    }
    return 0;*/
    for(int row=1 ; row<=5 ; row++){
        char ch = 'a' + row -1;
        for(int col=1 ; col<=row ; col++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}