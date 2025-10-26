#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    // Initialize by constructor of DLL
    Node(int value){
        data = value;
        next = prev = NULL;
    }
};

int main(){

    Node *Head;
    Head = NULL;

    int arr[] = {2,4,10,9,12};

    // Insert the node at END of DLL

    Node* tail = Head;

    for(int i=0 ; i<5 ; i++){
        // Doubly Linked List does not exist
        if(Head == NULL){
            Head = new Node(arr[i]);
            tail = Head;
        }
        // Doubly Linked List exist
        else{
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    // Print the value of DLL from head
    
    Node *temp = Head;
    
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    // Print the value of DLL from tail
    
    temp = tail;
    
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }

    return 0;
}