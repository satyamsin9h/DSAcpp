#include<iostream>
using namespace std;

class Deque{
    int front,rear,size;
    int *arr;

    public:
    Deque(int n){
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    // empty
    bool isEmpty(){
        return front == -1;
    }

    // full
    bool isFull(){
        return (rear+1)%size == front;
    }

    // push front
    void push_front(int x){
        if(isEmpty()){
            front = rear = 0;
            arr[front] = x;
            cout<<"Pushed "<<x<<" in front of deque\n";
            return;
        }
        else if(isFull()){
            cout<<"Deque overflow\n";
            return;
        }
        else{
            front = (front-1+size)%size;
            arr[front] = x;
            cout<<"Pushed "<<x<<" in front of deque\n";
            return;
        }
    }

    // push back
    void push_back(int x){
        if(isEmpty()){
            front = rear = 0;
            arr[front] = x;
            cout<<"Pushed "<<x<<" at back of deque\n";
            return;
        }
        else if(isFull()){
            cout<<"Deque overflow\n";
            return;
        }
        else{
            rear = (rear+1)%size;
            arr[rear] = x;
            cout<<"Pushed "<<x<<" at back of deque\n";
            return;
        }
    }

    // pop front
    void pop_front(){
        if(isEmpty()){
            cout<<"Deque underflow\n";
            return;
        }
        else if(front == rear){
            cout<<"Popped "<<arr[front]<<" from front of deque\n";
            front = rear = -1;
            return;
        }
        else{
            cout<<"Popped "<<arr[front]<<" from front of deque\n";
            front = (front+1)%size;
            return;
        }
    }

    // pop back
    void pop_back(){
        if(isEmpty()){
            cout<<"Deque underflow\n";
            return;
        }
        else if(front == rear){
            cout<<"Popped "<<arr[rear]<<" from back of deque\n";
            front = rear = -1;
            return;
        }
        else{
            cout<<"Popped "<<arr[rear]<<" from back of deque\n";
            rear = (rear-1+size)%size;
            return;
        }
    }

    // start
    int start(){
        if(isEmpty())
            return -1;
        else
            return arr[front];
    }

    // end
    int end(){
        if(isEmpty())
            return -1;
        else
            return arr[rear];;
    }
};

int main(){

    Deque d(5);

    d.push_back(5);
    d.push_front(9);
    cout<<d.end()<<endl;
    d.pop_back();
    cout<<d.start()<<endl;
    d.pop_front();
    cout<<d.start()<<endl;
    d.pop_back();

    return 0;
}