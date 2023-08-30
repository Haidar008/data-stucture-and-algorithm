#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int x){
        data=x;
        next=NULL;
    }
};
class Stack{
    node*top;
    public:
    Stack(){top=NULL;}
    bool isempty(){
        if(top==NULL) return true;
        else return false;
    }
    void push(int key){
        node*newnode=new node(key);
        if(newnode==NULL) {
            cout<<"stack overflow "<<endl;
            return;
        }
        newnode->next=top;
        top=newnode;
    }
    int pop(){
        if(isempty()){
            cout<<"stack underflow "<<endl;
            return -1;
        }
        node*temp=top;
        top=top->next;
        int val=temp->data;
        free(temp);
        return val;
    }
    int peek(){
        if(isempty()){
            cout<<"stack underflow "<<endl;
            return -1;
        }
        return top->data;
    }
    void display(){
        node*temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Stack st;
    st.push(90);
    st.push(56);
    st.push(45);
    st.push(34);
    st.push(23);
    st.push(12);cout<<"the element of stack are:"<<endl;
    st.display();
    cout<<"the top element is"<<st.peek()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    return 0;
}