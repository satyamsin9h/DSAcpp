#include<iostream>
#include<vector>
using namespace std;

int main(){
    // enter no. of rows and cols
    int n,m;
    cout<<"Enter no. of rows and cols:";
    cin>>n>>m;
    // create 2d vector
    vector<vector<int>>matrix(n,vector<int>(m,1));
    // enter values in matrix
    cout<<"Enter the elements of matrix:"<<endl;
    for(int i=0 ; i<n ;i++)
        for(int j=0 ; j<m ; j++)
        cin>>matrix[i][j];
    // display the initialised 2d-vector
    for(int i=0 ; i<n ;i++){
        for(int j=0 ; j<m ; j++)
        cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    // to find rows
    cout<<"Rows: "<<matrix.size()<<endl;
    // to find cols
    cout<<"Cols: "<<matrix[0].size()<<endl;

    return 0;
}
