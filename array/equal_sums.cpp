#include <iostream>
#include <vector>
using namespace std;

// equal sum sub-array
bool equalSum(vector<int> &arr){
    int total_sum=0, prefix=0;
    for(int i=0 ; i<arr.size() ; i++)
        total_sum+=arr[i];

    for(int i=0 ; i<arr.size()-1 ; i++){
        prefix += arr[i];
        if(total_sum==2*prefix) //total_sum-prefix = prefix
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Size of array:";
    cin>>n;
    cout<<"Enter array elements:"<<endl;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++)
    cin>>arr[i];

    bool equal=equalSum(arr);
    if(equal==1)
    cout<<"equal"<<endl;
    else
    cout<<"not equal"<<endl;;
    return 0;
}