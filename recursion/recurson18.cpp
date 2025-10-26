#include<iostream>
#include<vector>
using namespace std;

// Partition for pivot element
int partition(int arr[], int start, int end){
    int pos = start;
    for(int i=start ; i<=end ; i++){
        if(arr[i] <= arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

// Quick Sort recursive function
void quickSort(int arr[], int start, int end){
    // base case
    if(start >= end) return;

    int pivot = partition(arr, start, end);
    // left array
    quickSort(arr, start, pivot-1);
    // right array
    quickSort(arr, pivot+1, end);
}

int main(){
    // Implementing Quick Sort
    int arr[] =  {10,3,4,1,5,6,3,2,11,9};
    // Before sorting
    for(int i=0 ; i<10 ; i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    quickSort(arr,0,9);

    // After sorting
    for(int i=0 ; i<10 ; i++)
    cout<<arr[i]<<" ";

    return 0;
}