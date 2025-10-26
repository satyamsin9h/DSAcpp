#include <iostream>
using namespace std ;

// create function
int Fibonacci ( int num ){
    int first_num = 0;
    int second_num = 1;
    int current;
    if(num==1) {
        return first_num;
    }
    if(num==2) {
        return second_num;
    }
    for(int i=3; i<=num ; i++){
        current = first_num + second_num;
        first_num = second_num;
        second_num = current;
    }
    return current;
}

int main (){
    int num;
    cout << "Enter Num: " ;
    cin >> num;
    float n = Fibonacci (num); // call function
    cout<<"nth term: "<<n;
    return 0 ;
}