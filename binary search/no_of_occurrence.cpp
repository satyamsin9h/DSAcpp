#include<iostream>
using namespace std;

int count(int arr[], int n, int x) {
	    // code here
	    int start = 0, end = n - 1, mid, first = -1, last = -1, val = -1;
		// Check for given elem in array
	    while(start<=end){
	        mid = start + (end-start)/2;
	        if(arr[mid]==x){
	            val = mid;
	            break;
	        }
	        else if(arr[mid]<x)
	        start = mid + 1;
	        else
	        end = mid - 1;
	    }
	    if(val==-1) return 0;
        // For first occurrence
	    start = 0, end = n - 1;
	    while(start<=end){
	        mid = start + (end-start)/2;
	        if(arr[mid]==x){
	            first = mid;
	            end = mid - 1;
	        }
	        else if(arr[mid]<x)
	        start = mid + 1;
	        else
	        end = mid - 1;
	    }
        // For last occurrence
	    start = 0, end = n - 1;
	    while(start<=end){
	        mid = start + (end-start)/2;
	        if(arr[mid]==x){
	            last = mid;
	            start = mid + 1;
	        }
	        else if(arr[mid]<x)
	        start = mid + 1;
	        else
	        end = mid - 1;
	    }
	    return last-first + 1;
	}

int main(){
    int n;
    cout<<"Size of array:";
    cin>>n;

    int arr[n];
    cout<<"Enter sorted arr elems:"<<endl;
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    
    int x;
    cout<<"Array elem:";
    cin>>x;

    cout<<"No. of Occurrence:"<<count(arr,n,x);
    return 0;
}