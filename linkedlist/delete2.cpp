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

Node* CreateLinkedList(int arr[], int index, int size) {

    // Base Case
    if(index == size)
    return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index+1, size);

    return temp;
}

int main() {

    Node *Head;
    Head = NULL;

    int arr[] = {2,4,10,9,12};

    // Insert the node at END using Recursion

    Head = CreateLinkedList(arr, 0, 5);

    // Print the value
    
    Node *temp = Head;
    
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    // Delete the Last Node on ll

    if(Head != NULL){ // Check if Head is NULL

        if(Head->next == NULL){ // If there is only one element
            Node *temp = Head;
            Head = NULL;
            delete temp;
        }
        else { // If there are more than one element in LL
            Node *curr = Head;
            while(curr->next->next != NULL){
                curr = curr->next;
            }
            delete curr->next->next;
            curr->next = NULL;
        }
    }

    // Print the value after deletion
    
    temp = Head;
    
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    return 0;
}