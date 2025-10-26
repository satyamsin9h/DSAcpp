#include<iostream>
#include<queue>
using namespace std;

int main(){

    // How to ceate a queue
    queue<int> q;
    q.push(10);
    q.push(15);
    q.push(40);

    // delete
    q.pop();

    // front element
    cout<<q.front()<<endl;

    // back element
    cout<<q.back()<<endl;

    // size
    cout<<q.size()<<endl;

    // empty
    cout<<q.empty();

    return 0;
}