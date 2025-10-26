#include<iostream>
using namespace std;

void print(int arr[], int index){
    if(index == -1)
        return;

    cout<<arr[index]<<" ";
    print(arr, index-1);
}

int main(){
    // print the array using recursion
    int arr[] = {3,7,1,8,5};

    print(arr,4);

    return 0;
}