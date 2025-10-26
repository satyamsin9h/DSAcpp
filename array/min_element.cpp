#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,4,8,-7,9};
    int ans = INT32_MAX;
    //Min value
    for(int i=0 ; i<5 ; i++){
        if(arr[i]<ans) 
        ans = arr[i];
    }
    cout<<ans;
    return 0;
}