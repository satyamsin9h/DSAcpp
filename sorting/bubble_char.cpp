#include<iostream>
using namespace std;

void printArray (char a[],int n){
    for(int i=0 ; i<n ; i++)
    cout<<a[i]<<" ";
}

int main(){
    char arr[1000];
    int n; 
    cout<<"Enter the size of Array:";
    cin>>n;
    cout<<"Enter the elements in Array:"<<endl;
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];

    for(int i=n-2 ; i>=0 ; i--){
        bool swapped = 0;
        for(int j=0 ; j<=i ; j++){
            if(arr[j]>arr[j+1])  // for ascending order
            swap(arr[j],arr[j+1]);
            swapped = 1;
        }
        if(swapped==0)
        break;
    }
    printArray(arr,n);
    return 0;
}