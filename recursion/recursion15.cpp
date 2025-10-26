#include<iostream>
using namespace std;

bool linearsearch(int arr[], int index, int x, int N){
    // base case
    if(index == N) return 0;
    
    if(x == arr[index]) return 1;

    return linearsearch(arr, index+1, x, N); 
}

int main(){
    // apply Linear Search using Recursion 
    int arr[] = {2,6,4,8,9,1,3};

    cout<<linearsearch(arr,0,11,7)<<endl;
    

    return 0;
}