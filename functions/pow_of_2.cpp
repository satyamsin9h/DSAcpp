#include <iostream>
using namespace std ;

//check power of 2
bool powOfTwo ( int n ){
    if(n<1) return 0;
    for(int mul = 1 ; mul<=n ; mul=mul*2){
        if(n%mul==0) 
        continue;
        else 
        return 0;
    }
    return 1;
}

int main (){
    int n;
    cout<<"n:";
    cin>>n;
    bool x = powOfTwo(n);
    if(x==0) cout<<"Not Pow of 2";
    else cout<<"Pow Of 2";
    return 0;
}