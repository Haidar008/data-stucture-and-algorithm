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
node*reverse(node*head){
    node*curr=head;
    node*prev=NULL;
    node*next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
node*deletee(node*head){
    head=reverse(head);
    node*curr=head;
    int max_till_now=curr->data;
    node*prev=curr;
    curr=curr->next;
    while(curr!=NULL){
        if(curr->data>=max_till_now){
            max_till_now=curr->data;
            prev=curr;
            curr=curr->next;
        }
        else{
            prev->next=curr->next;
            curr=prev->next;
        }
    }
    head=reverse(head);
    return head;
}
};
int main(){
    ll list;
    node*head=NULL;
    head=list.create(head);
    list.traverse(head);
    head=list.deletee(head);
    list.traverse(head);
    return 0;
}
