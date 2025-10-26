#include<iostream>
#include<vector>
#include<algorithm>
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

Node *addNode(Node *head, int pos, int data) {
    Node* curr = head;

    if(pos == 0){
        Node* temp = new Node(data);
        // LL doesn't exist
        if(curr == NULL){
            curr = temp;
            return curr;
        }
        // LL exists
        else{
            temp->next = curr;
            temp->next->prev = temp;
            curr = temp;
            return curr;
        }
    }
        
    while(--pos){
        curr = curr->next;
    }
        
    Node* temp = new Node(data);
    if(curr->next == NULL){
        curr->next = temp;
        temp->prev = curr;
        return head;
    }
    temp->next = curr->next;
    temp->prev = curr;
    curr->next = temp;
    temp->next->prev = temp;    
        
    return head;
}

Node* createDLL(vector<int> &arr, int index, Node* back) {

    // Base Case
    if(index == arr.size())
        return NULL;

    Node* temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createDLL(arr, index+1, temp);
    return temp;
}

int main() {

    Node *Head;
    Head = NULL;

    vector<int> arr(5);
    arr = {2,4,10,9,12};

    // Create DLL using Recursion
    Head = createDLL(arr, 0, NULL);

    // Print the value of DLL from head
    
    Node *temp = Head;
    
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    // Insert at Node at given pos(0 - based indexing)
    Head = addNode(Head, 0, 99);

    // Print the value of DLL from head
    
    temp = Head;
    
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}