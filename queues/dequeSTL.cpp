#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d;
    d.push_back(19);
    d.push_back(44);
    d.push_back(35);
    d.pop_front();
    d.push_front(37);
    cout<<d.size()<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.empty()<<endl;

    return 0;
}