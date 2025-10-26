#include<iostream>
using namespace std;

int squareSum(int N){

    // Base Case
    if(N == 1)
        return 1;

    return N*N + squareSum(N-1);
}

int main(){
    
    // Print sum of square N natural numbers
    int N;
    cin>>N;
    if(N <= 0 )
        cout<<"Enter natural number\n";

    cout<<squareSum(N)<<endl;
    return 0;
}