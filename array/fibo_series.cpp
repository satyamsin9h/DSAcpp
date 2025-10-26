#include<iostream>
using namespace std;

// nth element of fiboacci series
int main(){
    int n; 
    cout<<"Enter no.: ";
    cin>>n;

    int arr[1000];
    arr[0]=0; //first=0
    arr[1]=1; //second=1

    for(int i=2 ; i<n ; i++)
        arr[i] = arr[i-1] + arr[i-2];

    cout<<arr[n-1];
    return 0;
}