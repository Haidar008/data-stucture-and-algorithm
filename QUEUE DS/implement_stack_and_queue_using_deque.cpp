#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};
class Deque{
    public:
    int val;
    node*front;
    node*rear;
    Deque(){
        front=NULL;
        rear=NULL;
    }
    bool isempty(){
        return (front==NULL);
    }
    void insert_front(int x){
        node*newnode=new node(x);
        if(newnode==NULL){
            cout<<"overflow condition "<<endl;
            return;
        }
        if(front==NULL){
            front=rear=newnode;
        }
        else{
            front->prev=newnode;
            newnode->next=front;
            front=newnode;
        }
    }
    void insert_end(int x){
        node*newnode=new node(x);
        if(newnode==NULL){
            cout<<"overflow condition "<<endl;
            return;
        }
        if(front==NULL){
            front=rear=newnode;
        }
        else{
            rear->next=newnode;
            newnode->prev=rear;
            rear=newnode;
        }
    }
    int delete_front(){
        if(isempty()){
            cout<<"Underflow condition "<<endl;
            return -1;
        }
        val=front->data;
        if(front==rear){
            front=rear=NULL;
        }
        else{
            node*temp=front;
            front=front->next;
            front->prev=NULL;
            free(temp);
        }
        return val;
    }
    int delete_last(){
        if(isempty()){
            cout<<"Underflow condition "<<endl;
            return -1;
        }
        val=rear->data;
        if(front==rear){
            front=rear=NULL;
        }
        else{
            node*temp=rear;
            rear=rear->prev;
            rear->next=NULL;
            free(temp);
        }
        return val;
    }
};
class Stack:public Deque{
    public:
    void push(int x){
        insert_end(x);
    }
    int pop(){
        int ans=delete_last();
        return ans;
    }
    int top(){
        if(isempty()) return -1;
        else return rear->data;
    }
};
class Queue:public Deque{
    public:
    void push(int x){
        insert_end(x);
    }
    int pop(){
        int ans=delete_front();
        return ans;
    }
};
int main(){
    Stack st;
    st.push(90);
    st.push(78);
    st.push(34);
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    Queue q;
    q.push(322);
    q.push(12);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    return 0;
}