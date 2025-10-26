#include<iostream>
using namespace std;

void subsetSum(int arr[], int index, int n, int sum) {

    if(index == n){
        cout<<sum<<endl;
        return;
    }

    // Not Included
    subsetSum(arr, index+1, n, sum);
    // Included
    subsetSum(arr, index+1, n, sum + arr[index]);
}

int main() {

    int arr[] = {1,2,3};
    subsetSum(arr, 0, 3, 0);

    return 0;
}