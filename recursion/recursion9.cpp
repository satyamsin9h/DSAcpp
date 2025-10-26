#include<iostream>
using namespace std;

int countEven(int arr[], int index, int count){
    // Base Case
    if(index == -1)
        return count;
    if(arr[index]%2 == 0)
        count++;
    // Recursive Function
    return countEven(arr, index-1, count);
}

int main(){
    // Print count no. of even numbers in array with recursion
    int arr[] = {4,8,6,7,3,8};

    cout<<countEven(arr,5,0)<<endl;

    return 0;
}