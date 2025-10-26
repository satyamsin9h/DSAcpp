#include<iostream>
#include<vector>
using namespace std;

// Merge Procedure
void merge(int arr[], int start, int end, int mid){
    vector<int> temp(end-start+1);
    int left = start, right = mid+1, index = 0;
    while(left <= mid && right <= end){
        if(arr[left] <= arr[right]){
            temp[index] = arr[left];
            index++, left++;
        }else{
            temp[index] = arr[right];
            index++, right++;
        }
    }
    // agar left array has some elements
    while(left <= mid){
        temp[index] = arr[left];
        index++, left++;
    }
    // agar right array has some elements
    while(right <= end){
        temp[index] = arr[right];
        index++, right++;
    }
    // put values to original array
    index = 0;
    while(start <= end){
        arr[start] = temp[index];
        start++, index++;
    }
}

// Merge Sort recursive function
void mergeSort(int arr[], int start, int end){
    // base case
    if(start == end) return;

    int mid = start + (end-start)/2;
    // left array
    mergeSort(arr, start, mid);
    // right array
    mergeSort(arr, mid+1, end);
    // merge 
    merge(arr, start, end , mid);
}

int main(){
    // Implementing Merge Sort
    int arr[] =  {8,29,33,5,12,17,25,18};
    // Before sorting
    for(int i=0 ; i<8 ; i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    mergeSort(arr,0,7);

    // After sorting
    for(int i=0 ; i<8 ; i++)
    cout<<arr[i]<<" ";

    return 0;
}