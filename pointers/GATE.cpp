#include <iostream>
#include <vector>
using namespace std;

void second(int *p1, int *p2){
    p1 = p2;
    *p1 = 2;
}

int four(int x, int *py, int **ppz){
    int y, z;
    **ppz += 1; z = **ppz;
    *py += 2; y = *py;
    x += 3;
    return x+y+z;
}

void five(char *str1, char *str2){
    while((*str1 = *str2)){
        str1++, str2++;
    }
}


int main()
{   // q1
 /* char c[] = "GATE2025";
    char *p = c;
    cout<<p + p[3] - p[1]; */

    // q2
 /* int i=0, j=1;
    second(&i, &j);
    cout<<i<<" "<<j<<endl; */

    // q3
 /* int *ptr;
    int x = 0;
    ptr = &x;
    int y = *ptr;
    *ptr = 1;
    cout<<x<<" "<<y<<endl; */

    // q4
 /* int a=5, b=10;
    int &name = a;
    int *ptr = &a;
    (*ptr)++;
    ptr = &b;
    *ptr = *ptr + 5;
    name += 5;
    cout<<a<<" "<<b; */

    // q5
 /* int c, *b, **a;
    c=4, b=&c, a=&b;
    cout<<four(c, b, a); */

    // q6 -> string copy code(where length of two strings not matter)
    char first[] = "Mohit";
    char second[] = "Rohan";
    five(first, second);
    cout<<first<<endl;

    return 0;
}