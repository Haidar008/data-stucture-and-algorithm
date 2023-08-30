#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insert_correct_position(stack<int>&st,int key){
    if(st.empty()||st.top()<key){
        st.push(key);
        return;
    }
    int a=st.top();
    st.pop();
    st.push(a);
}
void sort_stack(stack<int>&st){
    if(st.empty()){
        return;
    }
    int a=st.top();
    st.pop();
    sort_stack(st);
    insert_correct_position(st,a);
}
int main(){
    stack<int>st;
    st.push(34);
    st.push(23);
    st.push(12);
    st.push(78);
    st.push(90);
    sort_stack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}