#include<iostream>
using namespace std;

int minelement(int arr[], int index, int n){
    // Base Case
    if(index == n-1)
        return arr[index];
    // Recursive Function
    return min(arr[index], minelement(arr, index+1, n));
}

int main(){
    // Print minelement from array with recursion
    int arr[] = {4,8,6,7,3};

    cout<<minelement(arr, 0, 5)<<endl;

    return 0;
}