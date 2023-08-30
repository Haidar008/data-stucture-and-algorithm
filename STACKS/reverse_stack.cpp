#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insert_at_bottom(int key,stack<int>&st){
    if(st.empty()){
        st.push(key);
        return;
    }
    int a=st.top();
    st.pop();
    insert_at_bottom(key,st);
    st.push(a);
}
void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int a = st.top();
    st.pop();
    reverse(st);
    insert_at_bottom(a, st);
}
int main()
{
    stack<int> st;
    st.push(78);
    st.push(45);
    st.push(34);
    st.push(23);
    st.push(12);
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}