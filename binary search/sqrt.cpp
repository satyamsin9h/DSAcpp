#include<iostream>
using namespace std;
// Sqrt(x)
int SquareRoot(int x) {
        // code here
        int start = 1, end = x/2, mid,ans;
        if(x<2) return x;
        while(start<=end){
            mid = start + (end-start)/2;

            if(mid==x/mid){
                ans = mid;
                break;
            }
            else if(mid<x/mid){
                start = mid + 1;
                ans = mid;
            }
            else{
                end = mid - 1;
            }
        }
        return ans;
    }

int main(){
    int n; 
    cout<<"Enter the square:";
    cin>>n;

    cout<<SquareRoot(n);
    return 0;
}