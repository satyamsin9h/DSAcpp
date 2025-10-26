#include<iostream>
using namespace std;

int main(){

    for(int row=1 ; row<=5 ; row++){
        for(int spc=1 ; spc<row ; spc++)
        cout<<"  ";
        for(int col=row ; col<=5 ; col++)
            cout<<col<<" ";

            cout<<endl;
    }
    
}