#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define Max 5
class Stack{
    int top;
    public:
        int arr[Max];
        Stack(){
            top=-1;
        }
        bool isempty();
        bool isfull();
        void push(int key);
        int pop();
        int peek();
};
bool Stack::isempty(){
    if(top==-1) return true;
    else return false;
}
bool Stack::isfull(){
    if(top==Max-1) return true;
    else return false;
}
void Stack::push(int key){
    if(isfull()){
        cout<<"stack overflow "<<endl;
        return;
    }
    top++;
    arr[top]=key;
}
int Stack::pop(){
    if(isempty()){
        cout<<"stack underflow "<<endl;
        return -1;
    }
    int val=arr[top];
    top--;
    return val;
}
int Stack::peek(){
    if(isempty()){
        cout<<"stack underflow "<<endl;
        return -1;
    }
    return arr[top];
}
int main(){
    Stack st;
    st.push(90);
    st.push(56);
    st.push(45);
    st.push(34);
    st.push(23);
    st.push(12);
    cout<<st.peek()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    return 0;
}