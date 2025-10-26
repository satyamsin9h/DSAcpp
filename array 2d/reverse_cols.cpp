#include <iostream>
using namespace std;

// print reversed cols
void printreversecols(int arr[][4], int row, int col){
    for(int j=0 ; j<col ; j++){
        int start = 0, end = row-1;
        while(start<end){
            swap(arr[start][j],arr[end][j]);
            start++;
            end--;
        }
    }
}
int main(){
    // create 2d array
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // print all the value in array
    cout<<"Original 2d-array:"<<endl;
    for(int row=0 ; row<3 ; row++){
        for(int col=0 ; col<4 ; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    // call function to reverse cols
    printreversecols(arr,3,4);

    // print reversed cols 2d-array
    cout<<"Reversed cols 2d-array:"<<endl;
    for(int row=0 ; row<3 ; row++){
        for(int col=0 ; col<4 ; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}