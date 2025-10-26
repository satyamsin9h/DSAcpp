#include<iostream>
using namespace std;

void printArray (int a[],int n){
    for(int i=0 ; i<n ; i++)
    cout<<a[i]<<" ";
}

// 2: Insertion Sort Algorithm to sort the array of integers in increasing order if we start from the last element of the array. Question was explained in the class.

int main(){
    int arr[1000];
    int n; 
    cout<<"Enter the size of Array:";
    cin>>n;
    cout<<"Enter the elements in Array:"<<endl;
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];

    for(int i=1 ; i<=n-1 ; i++){
        bool swapped = 0;
        for(int j=n-1 ; j>=i ; j--){
            if(arr[j]<arr[j-1])  // for ascending order
            swap(arr[j],arr[j-1]);
            swapped = 1;
        }
        if(swapped==0)
        break;
    }
    printArray(arr,n);
    return 0;
}