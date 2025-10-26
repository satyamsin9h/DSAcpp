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

    for(int i=1 ; i<n ; i++){
        for(int j=i ; j>0 ; j--){
            if(arr[j]>arr[j-1])   // descending order
            swap(arr[j],arr[j-1]);
            else 
            break;
        }
    }
    printArray(arr,n); 
    return 0;
}