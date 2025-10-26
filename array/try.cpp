#include<iostream>
using namespace std;
// brute force for kth missing positive number 
int findK (int arr[],int n,int k){
    for(int i=0 ; i<n ; i++){
        if(arr[i]<=k) k++;
        else break;
    }
    return k;
}

int main(){
    int arr[1000];
    int n; 
    cout<<"Enter the size of Array:";
    cin>>n;
    cout<<"Enter the elements in Array:"<<endl;
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];

    int k;
    cout<<"Kth:";
    cin>>k;
    
    cout<<findK(arr,n,k);
    return 0;
}