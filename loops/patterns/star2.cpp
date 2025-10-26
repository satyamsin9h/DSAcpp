#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"n:";
    cin>>n;
    /*for(int row=1 ; row<=n ; row++){
        for(int spc=1; spc<=n-row ; spc++){
            cout<<"  ";         //2space
        }
        for(int col=1 ; col<=2*row-1 ; col++)
            cout<<"* ";        //1space after star

            cout<<endl;
    }*/

    
    for(int row=1 ; row<=n ; row++){
        for(int spc=1; spc<=n-row ; spc++){
            cout<<" ";         //1space
        }
        for(int col=1 ; col<=2*row-1 ; col++)
            cout<<"*";        //no space after star

            cout<<endl;
    }
    return 0;
}