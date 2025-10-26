#include <iostream>
using namespace std;


int main(){
    /*// getline and print size
    string s;
    getline(cin,s);
    cout<<s.size();*/

    /*// to append another string
    string s1 = "satyam";
    string s2 = "singh";
    string s3 = s1.append(s2);
    // string s3 = s1 + s2;
    cout<<s3;*/

    /*// pushback and popback operations on string
    string s = "satyam";
    s.pop_back();
    s.push_back('h');
    cout<<s;*/

    // escape character '\' use
    string s = "satyam singh is a \"bad\" boy";
    cout<<s; 
 
    return 0;
}