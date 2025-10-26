#include<iostream>
using namespace std;

int factorial(int N){

    // Base Case
    if(N == 1 || N == 0){
        return 1;
    }

    return N*factorial(N-1);
}

int main(){
    
    // Print factorial of N
    int N;
    cin>>N;
    if(N < 0 )
        cout<<"Factorial not possible\n";

    cout<<factorial(N)<<endl;
    return 0;
}