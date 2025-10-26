#include <iostream>
using namespace std ;

// create function4
int isPrime ( int num ){
    if(num<2) return 0;
    else{
        for(int div=2 ; div<=num/2 ; div++)
            if(num%div==0) return 0;
        
        return 1;
    }
}

int main (){
    int num;
    cout << "Enter Num: " ;
    cin >> num;
    int n = isPrime (num); // call function
    if (n == 1 )
        cout << "Prime" ;
    else
        cout << "Not Prime" ;
    // isPrime (num);
    return 0 ;
}