#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    queue<int>q;
    void push(int x){
        q.push(x);
        int current_size=q.size();
        while(current_size>1){
            int temp=q.front();
            q.pop();
            q.push(temp);
            current_size--;
        }
    }
    int pop(){
        if(q.empty()) return -1;
        int val=q.front();
        q.pop();
        return val;
    }
    int top(){
        if(q.empty()) return -1;
        return q.front();
    }
};
int main(){
    Stack st;
    st.push(90);
    st.push(56);
    st.push(34);
    st.push(23);
    st.push(12);

    cout<<st.top()<<endl;
    
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.top()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
}