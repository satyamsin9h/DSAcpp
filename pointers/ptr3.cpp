#include<iostream>
#include<vector>
using namespace std;

void swapping(int *first, int *second){ // pass by pointer
    int temp = *first;
    *first = *second;
    *second = temp;
}

void swap(int &first, int &second){ // pass by reference
    int temp = first;
    first = second;
    second = temp;
}

void pass(vector<int> &temp){ // pass vector by reference
    int n = temp.size();
    for(int i=0 ; i<n ; i++)
    temp[i] = 10; 
}

void twice(int a[]){
    for(int i=0 ; i<5 ; i++)
    a[i] = a[i]*2;
}

void dob(int *a){
    for(int i=0 ; i<5 ; i++)
    a[i] = a[i]*2;
}
int main(){

/*  char arr[5] = "1234";
    char *ptr = arr;
    cout<<(void*)arr<<endl; // typecasting by void*
    cout<<static_cast<void*>(arr)<<endl;
    cout<<(void*)ptr<<endl;

    char name = 'a';
    char *ptr1 = &name;
    cout<<(void*)ptr1<<endl; */

    // Pass by pointer
    int first=10, second=20;
    swapping(&first, &second);
    cout<<first<<" "<<second<<endl;

    // Reference variable
    int num = 10;
    int &temp = num; // num and temp are same
    temp++;
    cout<<num<<endl;
    cout<<&temp<<" "<<&num<<endl;

    // Pass by reference
    swap(first, second);
    cout<<first<<" "<<second<<endl;

    // Pass vector array by reference
    vector<int> v(5,0);
    pass(v);
    for(int i=0 ; i<5 ; i++)
    cout<<v[i]<<" ";
    cout<<endl;

    int arr[5] = {2,4,12,17,15};
    twice(arr);
    for(int i=0 ; i<5 ; i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    dob(arr);
    for(int i=0 ; i<5 ; i++)
    cout<<arr[i]<<" ";

    return 0;
}