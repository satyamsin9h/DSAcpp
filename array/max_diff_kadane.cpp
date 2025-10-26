#include <iostream>
using namespace std;


int maxDiff(int arr[], int arr_size)
{
    int n = arr_size;
	int suffix = arr[n-1], maxi =  INT32_MIN;
    for(int i=n-2 ; i>=0 ; i--){
        maxi = max(maxi,suffix-arr[i]); // max(suffix) - arr[i]
        suffix = max(suffix,arr[i]);
    }
    return maxi;
} 

/* Driver program to test above function */
int main()
{
int arr[] = {9,5,8,12,2,3,7,4};
int n = sizeof(arr) / sizeof(arr[0]);

// Function calling
cout << "Maximum difference is " << maxDiff(arr, n)<<endl;

return 0;
}
