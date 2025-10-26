#include <iostream>
using namespace std;

// print wave-form
void printwave(int arr[][4], int row, int col){
    cout<<"Wave-form:"<<endl;
    for(int j=0 ; j<col ; j++){
        // to print even col-index
        if(j%2==0){
            for(int i=0 ; i<row ; i++)
            cout<<arr[i][j]<<" ";
        }
        // to print odd col-index
        else{
            for(int i=row-1 ; i>=0 ; i--)
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
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
    // function call to print wave form
    printwave(arr,3,4);
    return 0;
}