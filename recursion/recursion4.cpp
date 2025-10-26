#include<iostream>
using namespace std;

int pow2(int N){

    // Base Case
    if(N == 0)
        return 1;

    return 2 * pow2(N-1);
}

int main(){
    
    // Print power of 2, N
    int N;
    cout<<"Enter power of 2: ";
    cin>>N;
    if(N < 0 )
        cout<<"Enter positive value\n";

    cout<<pow2(N)<<endl;
    return 0;
}