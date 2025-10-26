#include<iostream>
using namespace std;

void printArray (int a[],int n){
    for(int i=0 ; i<n ; i++)
    cout<<a[i]<<" ";
}

int main(){
    int arr[5] = {3,5,17,14,10};
    int start = 0, end = 4;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    };
    printArray(arr,5);
    return 0;
}