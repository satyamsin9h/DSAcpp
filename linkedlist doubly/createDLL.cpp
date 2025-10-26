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

    Node* tail = Head;

    while(tail->next){
        tail = tail->next;
    }

    while(tail){
        cout<<tail->data<<" ";
        tail = tail->prev;
    }

    return 0;
}