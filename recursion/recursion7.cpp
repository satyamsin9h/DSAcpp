#include<iostream>
using namespace std;

int sum(int arr[], int index){
    // Base Case
    if(index == -1)
        return 0;
    // Recursive Function
    return arr[index] + sum(arr, index-1);
}

int main(){
    // Print sum of numbers in array with recursion
    int arr[] = {4,8,6,7,3};

    cout<<sum(arr,4)<<endl;

    return 0;
}