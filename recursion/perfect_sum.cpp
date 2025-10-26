#include<iostream>
using namespace std;

int perfectSums(int arr[], int index, int n, int sum) {

    if(index == n)
        return sum == 0;

    
    return perfectSums(arr, index+1, n, sum) + perfectSums(arr, index+1, n, sum - arr[index]);

}

int main() {

    int arr[] = {1,0};
    int sum = 1;
    
    cout<<perfectSums(arr, 0, 2, sum)<<endl;

    return 0;
}