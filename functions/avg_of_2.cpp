#include <iostream>
using namespace std ;

// create function
float avgTwoNum ( float num1 , float num2 ){
    return (num1 + num2)/2;
}

int main (){
    int num1;
    cout << "Enter Num1: " ;
    cin >> num1;
    int num2;
    cout << "Enter Num2: " ;
    cin >> num2;
    float n = avgTwoNum (num1,num2); // call function
    cout<<n;
    return 0 ;
}