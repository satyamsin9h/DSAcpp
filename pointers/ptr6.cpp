#include<iostream>
using namespace std;

int main(){
    // variable ke liye heap memory allocation
    int *ptr = new int;
    *ptr = 5;  // value assign
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    float *ptr2 = new float;
    *ptr2 = 29.33; // float value assigned
    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;

    // array in heap memory
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int *p = new int[n];

    // value dalo
    for(int i=0 ; i<n ; i++)
    p[i] = i+1;

    // print array
    for(int i=0 ; i<n ; i++)
    cout<<p[i]<<" ";

    // delete keyword use to release heap memory
    delete ptr;
    delete ptr2;
    delete[] p;

    return 0;
}