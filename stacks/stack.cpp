#include<iostream>
using namespace std;

// Implement Stack using Array
class Stack
{
    int *arr;
    int size;
    int top;
    

    public:
    bool flag;
    // Constructor
    Stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1;
    }

    // Push
    void push(int value){
        if(top == size-1){
            cout<<"Stack Overflow\n";
            return;
        }
        else{
            top++;
            arr[top] = value;
            cout<<"Pushed "<<value<<" into the stack.\n";
            flag = 0;
        }
    }
    // Pop
    void pop(){
        if(top == -1){
            cout<<"Stack underflow\n";
            return;
        }
        else{
            cout<<"Popped "<<arr[top]<<" out of the stack.\n";
            top--;
            if(top == -1)
                flag = 1;
        }
    }
    // Peek
    int peek(){
        if(top == -1){
            cout<<"Stack is empty\n";
            return -1;
        }
        else{
            return arr[top];
        }
    }
    // IsEmpty
    bool IsEmpty(){
        return top == -1;
    }
    // IsSize
    int IsSize(){
        return top+1;
    }
};

int main(){

    Stack S(5);
    
    int value = S.peek();
    if(S.flag==0)
    cout<<value<<endl;
    
    

    return 0;
}