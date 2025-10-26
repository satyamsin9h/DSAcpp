#include <iostream>
using namespace std;

// search element in 2d-array
int main(){
    // create 2d array
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int x;
    cout<<"Search Element:";
    cin>>x;

    // print all the value in array
    for(int row=0 ; row<3 ; row++){
        for(int col=0 ; col<4 ; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    // search element in 2d-array
    for(int row=0 ; row<3 ; row++){
        for(int col=0 ; col<4 ; col++){
            if(arr[row][col]==x){
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"No";
    return 0;
}