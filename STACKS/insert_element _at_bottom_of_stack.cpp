#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insert_bottom(stack<int>&st,int key){
    if(st.empty()){
        st.push(key);
        return;
    }
    int a=st.top();
    st.pop();
    insert_bottom(st,key);
    st.push(a);
}
int main(){
    stack<int>st;
    st.push(34);
    st.push(43);
    st.push(21);
    insert_bottom(st,8);
    while(!st.empty()){
        cout<<st.top()<< " ";
        st.pop();
    }
    return 0;
}