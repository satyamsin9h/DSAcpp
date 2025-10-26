#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class Stack{
    Node* top;
    int size;

    public:
    bool flag;
    // Constructor
    Stack(){
        top = NULL;
        size = 0;
        flag = 1;
    }
    // Push
    void push(int value){
        Node* temp = new Node(value);
        if(temp == NULL){
            cout<<"Stack Overflow\n";
            return;
        }
        else{
            temp->next = top;
            top = temp;
            size++;
            cout<<"Pushed "<<value<<" into the stack.\n";
            flag = 0;
        }
    }
    // Pop
    void pop(){
        if(top == NULL){
            cout<<"Stack underflow\n";
            return;
        }
        else{
            Node* temp = top;
            top = top->next;
            cout<<"Popped "<<temp->data<<" out of the stack.\n";
            delete temp;
            size--;
            if(size == 0)
                flag = 1;
        }
    }
    // Peek
    int peek(){
        if(top == NULL){
            cout<<"Stack is empty\n";
            return -1;
        }
        else{
            return top->data;
        }
    }
    // IsEmpty
    bool IsEmpty(){
        return top == NULL; 
    }
    // IsSize
    int IsSize(){
        return size;
    }
};

int main(){
    
    Stack S;
    
    S.pop();
    int value = S.peek();
    if(S.flag==0)
    cout<<value<<endl;
    cout<<S.IsEmpty()<<endl;
    cout<<S.IsSize();

    return 0;
}