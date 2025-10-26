#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    // Initialize by constructor
    Node(int value){
        data = value;
        next = NULL;
    }
};

int main() {

    Node *Head;
    Head = NULL;
    Node *Tail;

    int arr[] = {2,4,10,9,12};

    // Insert the node at END

    for(int i=0 ; i<5 ; i++){
        // Linked List does not exist
        if(Head == NULL){
            Head = new Node(arr[i]);
            Tail = Head;
        }
        // Linked List exist
        else{
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }

    // Print the value
    
    Node *temp = Head;
    
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    return 0;
}