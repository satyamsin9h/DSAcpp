#include<iostream>
#include<stack>
using namespace std;

bool check(string &s){
    stack<char> st;
    
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == '(')
            st.push(s[i]);
        else{
            if(st.empty())
                return false;
            else
                st.pop();
        }    
    }
        
    return st.empty();
}

int main(){
    string s;
    cout<<"Enter Parentheses: ";
    cin>>s;

    if(check(s))
        cout<<"Parentheses is Valid";
    else
    cout<<"Parentheses is not Valid";

    return 0;
}