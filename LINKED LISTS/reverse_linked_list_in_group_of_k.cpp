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
class ll{
    public:
node*create(node*head){
    node*temp;
    int n;
    cout<<"enter the number of node "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int item;
        cout<<"enter the value of element "<<endl;
        cin>>item;
        node*newnode=new node(item);
        if(head==NULL){
            head=newnode;
        }
        else{
            temp->next=newnode;
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
    node*reverse_k(node*head, int k){
    if(head==NULL){
        return NULL;
    }
    node*curr=head;
    node*prev=NULL;
    node*next;
    int count=0;
    while(curr!=NULL&&count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        head->next=reverse_k(next,k);
    }
    return prev;
    }
};
int main(){
    node*head=NULL;
    ll l;
    head=l.create(head);
    l.traverse(head);
    int k;
    cout<<"enterr the value of k"<<endl;
    cin>>k;
    head=l.reverse_k(head,k);
    l.traverse(head);
    return 0;
}