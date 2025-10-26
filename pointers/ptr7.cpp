#include<iostream>
using namespace std;

int main(){
    // Array create krna h, jo store krega address
    int n,m; // n = rows, m = cols
    cin>>n>>m;

    int **ptr = new int*[n];

    // Created 2D array
    for(int i=0 ; i<n ; i++){
        ptr[i] = new int[m];
    }

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>ptr[i][j];

    // Print the value
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cout<<ptr[i][j]<<" ";
        cout<<endl;
    }

    // Release the heap memory
    for(int i=0;i<n;i++)
    delete[] ptr[i];

    delete[] ptr;

    return 0;
}