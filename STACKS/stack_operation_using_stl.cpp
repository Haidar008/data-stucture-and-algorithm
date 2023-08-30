#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    st.push(12);
    st.push(89);
    st.push(45);
    st.emplace(56);
    cout<<"the top element is "<<st.top()<<endl;
    cout<<"the size of stack is "<<st.size()<<endl; 
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    cout<<st.empty()<<endl;
}