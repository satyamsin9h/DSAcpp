#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

class Queue{
    Node *front, *rear;
    public:
    Queue(){
        front = rear = NULL;
    }

    bool isEmpty(){
        return front == NULL;
    }

    void push(int x){
        if(isEmpty()){
            cout<<"Pushed "<<x<<" into the Queue\n";
            front = new Node(x);
            rear = front;
        }
        else{
            cout<<"Pushed "<<x<<" into the Queue\n";
            rear->next = new Node(x);
            rear = rear->next;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"Queue underflow\n";
        }
        else{
            cout<<"Popped "<<front->data<<" from the Queue\n";
            Node *temp = front;
            front = front->next;
            delete temp;
        }
    }

    int start(){
        if(isEmpty()){
            cout<<"Queue is empty\n";
            return -1;
        }
        else
            return front->data;
    }
};

int main(){

    Queue q;

    int val = q.start();
    if(!q.isEmpty())
    cout<<val;
    q.push(6);
    q.push(9);
    q.push(1);
    q.pop();
    int val2 = q.start();
    if(!q.isEmpty())
    cout<<val2;

    return 0;
}