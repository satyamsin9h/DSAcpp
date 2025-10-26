#include<iostream>
using namespace std;

int sum(int N){

    // Base Case
    if(N == 1){
        return 1;
    }

    return N + sum(N-1);
}

int main(){
    
    // Print sum of first N natural numbers
    int N;
    cin>>N;
    if(N <= 0 )
        cout<<"Not natural number\n";

    cout<<sum(N)<<endl;
    return 0;
}