#include <iostream>
using namespace std;

// print row-index with maximum sum
void printrowmax(int arr[][4], int row, int col){
    // calculate row-wise sum and print row-index with max sum
    int sum=INT32_MIN, index=-1;
    for(int row=0 ; row<3 ; row++){
        int total=0;
        for(int col=0 ; col<4 ; col++)
            total += arr[row][col];
        if(sum<total){
            sum = total;
            index = row;
        }
    }
    cout<<"Row-index with max sum is: "<<index<<endl<<"with sum = "<<sum;
}
int main(){
    // create 2d array
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // print all the value in array
    for(int row=0 ; row<3 ; row++){
        for(int col=0 ; col<4 ; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // function call to print row-index with max sum
    printrowmax(arr,3,4);
    return 0;
}