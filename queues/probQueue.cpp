#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// Print all numbers in every window of size k

void display(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){

    queue<int> q;

    int k = 3;

    vector<int> arr = {10,5,11,34,27,15};

    // k-1 elements ko push kardo queue ke andar
    for(int i=0 ; i<k-1 ; i++)
        q.push(arr[i]);

    for(int i=k-1 ; i<arr.size() ; i++){
        q.push(arr[i]);
        display(q);
        q.pop();
    }

    return 0;
}