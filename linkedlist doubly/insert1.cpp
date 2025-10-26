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

    // Insert the node at START of DLL

    for(int i=0 ; i<5 ; i++){
        // Doubly Linked List does not exist
        if(Head == NULL){
            Head = new Node(arr[i]);
        }
        // Doubly Linked List exist
        else{
            Node *temp = new Node(arr[i]);
            temp->next = Head;
            Head->prev = temp;
            Head = temp;
        }
    }

    // Print the value of DLL
    
    Node *temp = Head;
    
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}