#include<iostream>
using namespace std;

bool BinarySearch(int arr[], int start, int end, int x){
    // base case
    if(start > end) return 0;

    int mid = start + (end-start)/2;

    if(x == arr[mid]) 
        return 1;
    else if(arr[mid] < x)
        return BinarySearch(arr, mid+1, end, x);
    else
        return BinarySearch(arr, start, mid-1, x);
}

int main(){
    // apply Binary Search using Recursion 
    int arr[] = {1,3,5,7,8,9,10,11};

    cout<<BinarySearch(arr,0,8,11)<<endl;
    

    return 0;
}