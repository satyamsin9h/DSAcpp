#include<iostream>
using namespace std;

int main(){
    int a = 20;
    // print address of a
    cout<<&a<<endl;
    float n = 2.6;
    float *ptr2 = &n;
    cout<<ptr2<<endl;
    int *ptr = &a;
    *ptr += 5;
    cout<<*ptr<<endl;
    char m = 'j';
    char *ptr1 = &m;
    cout<<sizeof(ptr1)<<endl;

    return 0;
}