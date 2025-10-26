#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"n:";
    cin>>n;

    //for above n rows
    for(int row=1 ; row<=n ; row++){
        for(int col=1 ; col<=row ; col++)
        cout<<"*";
        for(int col=1 ; col<=2*n - 2*row ; col++)
        cout<<" ";
        for(int col=1 ; col<=row ; col++)
        cout<<"*";

        cout<<endl;
    }
    //for below n-1 rows
    for(int row=1 ; row<=n-1 ; row++){
        for(int col=1 ; col<=n-row ; col++)
        cout<<"*";
        for(int col=1 ; col<=2*row ; col++)
        cout<<" ";
        for(int col=1 ; col<=n-row ; col++)
        cout<<"*";

        cout<<endl;
    }
    return 0;
}