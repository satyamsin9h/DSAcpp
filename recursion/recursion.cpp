#include<iostream>
using namespace std;

void printEven(int N){

    // Base Case
    if(N == 2){
        cout<<2<<endl;
        return;
    }

    printEven(N-2);
    cout<<N<<endl;
}

int main(){
    
    // Print even number from 1 to N
    int N;
    cin>>N;
    if(N%2 == 1)
        N--;
    printEven(N);
    return 0;
}