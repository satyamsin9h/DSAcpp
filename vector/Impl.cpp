#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
   /* // create vector,declare
    vector<int>v;
    vector<int>v1(5,1);
    // size and capacity of v
    cout<<"Size of v:"<<v.size()<<endl;
    cout<<"Capacity of v:"<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout<<"Size of v:"<<v.size()<<endl;
    cout<<"Capacity of v:"<<v.capacity()<<endl;
    // Update value
    v[1]=5;
    // size and capacity of v1
    cout<<"Size of v1:"<<v1.size()<<endl;
    cout<<"Capacity of v1:"<<v1.capacity()<<endl;
    v1.push_back(7);
    cout<<"Size of v1:"<<v1.size()<<endl;
    cout<<"Capacity of v1:"<<v1.capacity()<<endl;

    vector<int>v3 = {1,2,3,4,5};
    // size and capacity of v3
    cout<<"Size of v3:"<<v3.size()<<endl;
    cout<<"Capacity of v3:"<<v3.capacity()<<endl;*/


   /* // delete value from vector
    vector<int>vnew;
    vnew.push_back(4);
    vnew.push_back(41);
    vnew.push_back(14);
    vnew.push_back(42);
    vnew.push_back(84);
    vnew.pop_back();
    cout<<"Size of vnew:"<<vnew.size()<<endl;
    cout<<"Capacity of vnew:"<<vnew.capacity()<<endl;
    // erase
    vnew.erase(vnew.begin()+1);
    cout<<"Size of vnew:"<<vnew.size()<<endl;
    cout<<"Capacity of vnew:"<<vnew.capacity()<<endl;
    for(int i=0 ; i<vnew.size() ; i++)
    cout<<vnew[i]<<" ";

    vnew.insert(vnew.begin()+1,50); // insert
    cout<<endl;
    for(int i=0 ; i<vnew.size() ; i++)
    cout<<vnew[i]<<" ";
    // update
    vnew[1]=37;
    cout<<endl;
    for(int i=0 ; i<vnew.size() ; i++)
    cout<<vnew[i]<<" ";
    // clear: remove all elements
    vnew.clear();
    cout<<endl;
    cout<<"Size of vnew:"<<vnew.size()<<endl;
    cout<<"Capacity of vnew:"<<vnew.capacity()<<endl;*/


    /*vector<int>arr;
    arr.push_back(2);
    arr.push_back(12);
    arr.push_back(21);
    arr.push_back(122);
    // front element
    cout<<arr[0]<<endl;
    cout<<arr.front()<<endl;
    // back element
    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;

    vector<int>a;
    // copy value of one vector into another
    a = arr;
    cout<<a.size()<<endl;
    // print vector elements
    for(auto it=arr.begin() ; it<arr.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto i: arr)
    cout<<i<<" ";*/


    vector<int>ans;
    ans.push_back(5);
    ans.push_back(235);
    ans.push_back(15);
    ans.push_back(54);
    ans.push_back(125);
    ans.push_back(5);

    // sort in ascending order
    sort(ans.begin(),ans.end());
    for(int i=0 ; i<ans.size() ; i++)
    cout<<ans[i]<<" ";
    cout<<endl;
    // // sort in descending order
    // sort(ans.begin(),ans.end(),greater<int>());
    // for(int i=0 ; i<ans.size() ; i++)
    // cout<<ans[i]<<" ";
    // cout<<endl;
    // // alternative to sort in descending order
    // sort(ans.rbegin(),ans.rend());
    // for(int i=0 ; i<ans.size() ; i++)
    // cout<<ans[i]<<" ";

    // search in binary search
    cout<<binary_search(ans.begin(),ans.end(),54)<<endl; //gives bool value

    cout<<find(ans.begin(),ans.end(),54)-ans.begin()<<endl;//gives index

    cout<<*max_element(ans.begin(),ans.end())<<endl;//gives max element

    cout<<count(ans.begin(),ans.end(),5)<<endl;//counts ocuurence of element
}