#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;

    Node(int value){
        data = value;
        left = right = NULL;
    }
};

void Preorder(Node* root){
    if(root == NULL)
        return;

    // Node
    cout<<root->data<<" ";
    // Left
    Preorder(root->left);
    // Right
    Preorder(root->right);
}

void Inorder(Node* root){
    if(root == NULL)
        return;

    // Left
    Inorder(root->left);
    // Node
    cout<<root->data<<" ";
    // Right
    Inorder(root->right);
}

void Postorder(Node* root){
    if(root == NULL)
        return;

    // Left
    Postorder(root->left);
    // Right
    Postorder(root->right);
    // Node
    cout<<root->data<<" ";
}

Node* BinaryTree(){
    int x;
    cin>>x;
    if(x==-1)
        return NULL;
    
    Node* temp = new Node(x);
    // Left side create
    cout<<"Enter the left child of "<<x<<": ";
    temp->left = BinaryTree();
    // Right side create
    cout<<"Enter the right child of "<<x<<": ";
    temp->right = BinaryTree();

    return temp;
}

int main(){

    cout<<"Enter the root element of tree: ";
    Node* root = BinaryTree();
    
    // Print Preorder Traversal
    cout<<"Preorder Traversal :"<<endl;
    Preorder(root);
    cout<<endl;
    // Print Inorder Traversal
    cout<<"Inorder Traversal :"<<endl;
    Inorder(root);
    cout<<endl;
    // Print Postorder Traversal
    cout<<"Postorder Traversal :"<<endl;
    Postorder(root);
    cout<<endl;


    return 0;
}