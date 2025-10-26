#include <iostream>
using namespace std;

// print reversed rows
void printreverserows(int arr[][4], int row, int col){
    for(int i=0 ; i<row ; i++){
        int start = 0, end = col-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
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
    
    // call function to reverse rows
    printreverserows(arr,3,4);

    // print reversed rows 2d-array
    cout<<"Reversed row 2d-array:"<<endl;
    for(int row=0 ; row<3 ; row++){
        for(int col=0 ; col<4 ; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}