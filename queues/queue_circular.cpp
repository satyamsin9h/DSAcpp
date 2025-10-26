#include<iostream>
using namespace std;

// Implement Circular Queue using Array
class Queue
{
    int *arr;
    int front, rear, size;

    public:

    // Constructor
    Queue(int n){
        arr = new int[n];
        front = rear = -1;
        size = n;
    }

    // If queue is empty or not
    bool isEmpty(){
        return front == -1;
    }

    // If queue is full or not
    bool isFull(){
        return (rear+1)%size == front;
    }

    // Push element into Queue, end
    void push(int x){
        if(isEmpty()){
            cout<<"Pushed "<<x<<" into the Queue\n";
            front++;
            rear++;
            arr[rear] = x;
        }
        else if(isFull()){
            cout<<"Queue overflow"<<endl;
            return;
        }
        else{
            cout<<"Pushed "<<x<<" into the Queue\n";
            rear = (rear+1) % size;
            arr[rear] = x;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"Queue underflow"<<endl;
            return;
        }
        else{
            if(front == rear){
                cout<<"Popped "<<arr[front]<<" from the Queue\n";
                front = rear = -1;
            }
            else{
                cout<<"Popped "<<arr[front]<<" from the Queue\n";
                front = (front+1) % size;
            }
        }
    }

    int start(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
};

int main(){

    Queue q(5);

    q.push(9);
    q.push(11);
    q.push(3);
    q.push(22);
    q.push(7);
    q.pop();
    q.pop();
    q.push(99);
    q.push(101);
    int val1 = q.start();
    if(!q.isEmpty()) 
    cout<<val1<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    int val2 = q.start();
    if(!q.isEmpty()) 
    cout<<val2<<endl;


    return 0;
}

