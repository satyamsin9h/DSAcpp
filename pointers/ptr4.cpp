#include <iostream>
#include <vector>
using namespace std;

// hw
void fun(int *&p)
{
  p++;
}

int main()
{
    int n=10;
    int *p=&n;
    cout<<p<<endl;
    fun(p);
    cout<<p;
}