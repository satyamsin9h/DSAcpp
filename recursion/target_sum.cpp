#include<iostream>
using namespace std;

bool targetSum(int arr[], int index, int n, int target) {

    if(target == 0)
    return 1;

    if(index == n || target < 0)
    return 0;

    return targetSum(arr, index+1, n, target) || targetSum(arr, index+1, n, target - arr[index]);

}

int main() {

    int arr[] = {1,2,3,6,8};
    int target = 14;
    cout<<targetSum(arr, 0, 5, target)<<endl;

    return 0;
}