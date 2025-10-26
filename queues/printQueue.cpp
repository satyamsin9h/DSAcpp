#include<iostream>
#include<queue>
using namespace std;

// Print Queue elements in O(1) space

int main(){

    queue<int> q;
    q.push(88);
    q.push(92);
    q.push(33);
    q.push(71);
    q.push(45);

    // Print Queue
    int n = q.size();

    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;

    cout<<q.size();

    return 0;
}