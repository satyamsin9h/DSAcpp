#include<iostream>
using namespace std;

//toggle binary digit program
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    int k=1;
    for(int row=1 ; row<=n ; row++){
        for(int col=1 ; col<=row ; col++){
            if(k%2==0)
            cout<<0;
            else
            cout<<1;
            cout<<" ";
            k++;
        }

            cout<<endl;
    }
    
}