#include<iostream>
using namespace std;
//IMPORTANT PATTERN
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    /*for(int row=1 ; row<=n ; row++){
        for(int spc=1; spc<=n-row ; spc++){
            cout<<"  ";     //2spaces
        }
        for(int col=1 ; col<=row ; col++)
            cout<<"*   ";   //3spaces after star

            cout<<endl;
    }*/

   for(int row=1 ; row<=n ; row++){
        for(int spc=1; spc<=n-row ; spc++){
            cout<<" ";     //1space
        }
        for(int col=1 ; col<=row ; col++)
            cout<<"* ";   //1space after star

            cout<<endl;
    }
    return 0;
}