#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};
class DLL{
public:
node*create(node*head){
    node*temp;
    int n;
    cout<<"enter the number of nodes "<<endl;
    cin>>n;
    cout<<"please enter the element in sorted order"<<endl;
    for(int i=0;i<n;i++){
        int item;
        cin>>item;
        node*newnode=new node(item);
        if(head==NULL){
            head=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
        }
        temp=newnode;
    }
    return head;
}
void traverse(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node*rotate(node*head,int n){
    if(n==0) return head;
    node*curr=head;
    while(n){
        curr=curr->next;
        n--;
    }
    node*tail=curr->prev;
    node*newhead=curr;
    curr->prev=NULL;
    tail->next=NULL;

    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=head;
    head->prev=curr;
    head=newhead;
    return head;
}
};
int main(){
    DLL list;
    node*head=NULL;
    head=list.create(head);
    list.traverse(head);
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    list.rotate(head,n);
    list.traverse(head);
    return 0;
}