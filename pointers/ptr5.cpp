#include <iostream>
#include <vector>
using namespace std;

void fun(int **p1)
{
  *p1 = *p1 + 1;
}

int main()
{
    int n = 10;
    int *p = &n; // single pointer
    int **p2 = &p; // double pointer
    int ***p3 = &p2; // triple pointer
    int ****p4 = &p3; // quadruple pointer
    cout<<*p<<endl;
    cout<<&n<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    cout<<p3<<endl;
    cout<<p4<<endl;

    // change address of pointer p
    fun(p2);
    cout<<p<<endl;

    // value ko modify krna h jo n me h
    ***p3 = ***p3 + 2;
    cout<<n;

    return 0;
}