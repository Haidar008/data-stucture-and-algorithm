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
class Queue{
    node*front;
    node*rear;
public:
    Queue(){
        front=NULL;
        rear=NULL;
    }
    bool isempty(){
        return (front==NULL);
    }
    void push(int x){
        node*newnode=new node(x);
        if(newnode==NULL) {
            cout<<"queue overflow "<<endl;
            return;
        }
        else if(front==NULL){
            front=newnode;
            rear=newnode;
        }
        else{
            rear->next=newnode;
            rear=newnode;
        }
    }
    int pop(){
        if(isempty()){
            cout<<"queue underflow "<<endl;
            return-1;
        }
        else if(front==rear){
            node*temp=front;
            int val=front->data;
            front=NULL;
            rear=NULL;
            free (temp);
            return val;
        }
        else{
            node*temp=front;
            int val=temp->data;
            front=front->next;
            free (temp);
            return val;
        }
    }
    void display(){
        node*temp=front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(78);
    q.push(45);
    q.push(34);
    q.push(23);
    q.push(98);
    q.push(61);

    cout<<q.pop()<<endl;

    q.display();

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    return 0;
}