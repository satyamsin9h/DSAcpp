#include<iostream>
using namespace std;

// Implementing DEQUE using LinkedList

class Node
{
    public:
    int data;
    Node *prev,*next;

    Node(int value){
        data = value;
        next = prev = NULL;
    }
};

class Deque
{
    Node *front,*rear;
    public:

    Deque(){
        front = rear = NULL;
    }

    // push front
    void push_front(int x){
        if(front == NULL){
            front = rear = new Node(x);
            cout<<"Pushed "<<x<<" in front of deque\n";
            return;
        }
        else{
            Node* temp = new Node(x);
            cout<<"Pushed "<<x<<" in front of deque\n";
            temp->next = front;
            front->prev = temp;
            front = temp;
            return;
        }
    }

    // push back
    void push_back(int x){
        if(front == NULL){
            front = rear = new Node(x);
            cout<<"Pushed "<<x<<" in back of deque\n";
            return;
        }
        else{
            Node* temp = new Node(x);
            cout<<"Pushed "<<x<<" in back of deque\n";
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            return;
        }
    }

    // pop front
    void pop_front(){
        if(front == NULL){
            cout<<"Deque underflow\n";
            return;
        }
        else{
            Node* temp = front;
            cout<<"Popped "<<temp->data<<" from front of deque\n";
            front = front->next;
            delete temp;

            if(front){
                front->prev = NULL;
            }
            else{
                rear = NULL;
            }
        }
    }

    // pop back
    void pop_back(){
        if(front == NULL){
            cout<<"Deque underflow\n";
            return;
        }
        else{
            Node* temp = rear;
            cout<<"Popped "<<temp->data<<" from back of deque\n";
            rear = rear->prev;
            delete temp;

            if(rear){
                rear->next = NULL;
            }
            else{
                front = NULL;
            }
        }
    }

    // start
    int start(){
        if(front == NULL)
            return -1;
        else
            return front->data;
    }

    // end
    int end(){
        if(front == NULL)
            return -1;
        else
            return rear->data;
    }
};

int main(){

    Deque d;
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