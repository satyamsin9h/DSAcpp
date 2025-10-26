// 2: Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 
#include<iostream>
using namespace std;

void printArray (int a[],int n){
    for(int i=0 ; i<n ; i++)
    cout<<a[i]<<" ";
}

int main(){
    int arr[1000];
    int n; 
    cout<<"Enter the size of Array:";
    cin>>n;
    cout<<"Enter the elements in Array:"<<endl;
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];

    for(int i=n-1 ; i>0 ; i--){
        int index = i;
        for(int j=i-1 ; j>=0 ; j--){
            if(arr[j]>arr[index])  // for ascending order
            index = j;
        }
        swap(arr[index],arr[i]);
    }
    printArray(arr,n);
    return 0;
}