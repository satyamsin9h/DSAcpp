#include <iostream>
using namespace std;

// print sum of diagonls
void printsumdiagonal(int matrix[][3], int row, int col){
    int first=0;
    int sec=0;
    // sum of first diagonal
    int i=0;
    while(i<row){
        first += matrix[i][i];
        i++;
    }
    // sum of second diagonal
    i=0; int j = col-1;
    while(i<row){
        sec += matrix[i][j];
        i++,j--;
    }
    cout<<"sum of first diagonal = "<<first<<endl<<"sum of second diagonal = "<<sec;
}
int main(){
    // create 2d array
    int matrix[3][3] = {1,2,3,4,5,6,7,8,9};

    // print all the value in array
    for(int row=0 ; row<3 ; row++){
        for(int col=0 ; col<3 ; col++){
            cout<<matrix[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // function call to print sum of diagonls
    printsumdiagonal(matrix,3,3);
    return 0;
}