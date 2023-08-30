#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    void insert_correct_position(int x,stack<int>&s){
        if(s.empty()||s.top()<=x){
            s.push(x);
            return;
        }
        int a=s.top();
        s.pop();
        insert_correct_position(x,s);
        s.push(a);
    }
    void sort_stack(stack<int>&s){
        if(s.empty()){
            return;
        }
        int a=s.top();
        s.pop();
        sort_stack(s);
        insert_correct_position(a,s);
    }
    void print(stack<int>s){
        while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    }
};
int main(){
    Stack st;
    stack<int>s;
    s.push(98);
    s.push(8);
    s.push(9);
    s.push(94);
    s.push(12);
    s.push(43);
    s.push(31);
    st.sort_stack(s);
    st.print(s);
    return 0;
}