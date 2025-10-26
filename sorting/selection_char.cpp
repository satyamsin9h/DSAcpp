#include<iostream>
using namespace std;

// 3: Selection Sort Algorithm to sort the array of char in ascending order.

void printArray (char a[],int n){ // passing char array
    for(int i=0 ; i<n ; i++)
    cout<<a[i]<<" ";
}

int main(){
    char arr[1000]; // for char
    int n; 
    cout<<"Enter the size of Array:";
    cin>>n;
    cout<<"Enter the elements in Array:"<<endl;
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];

    for(int i=0 ; i<n-1 ; i++){
        int index = i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[index])  // for ascending
            index = j;
        }
        swap(arr[index],arr[i]);
    }
    printArray(arr,n);
    return 0;
}