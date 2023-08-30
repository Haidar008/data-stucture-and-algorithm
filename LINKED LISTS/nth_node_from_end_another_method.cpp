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
node*create(node*head){
    int n;
    node*temp;
    cout<<"enter the number of nodes "<<endl;
    cin>>n;
    int item;
    cout<<"enter the items of linked list "<<endl;
    for(int i=0;i<n;i++){
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
int nth_node(node*head,int n){
    node*slow=head,*fast=head;
    while(n--){
        if(fast!=NULL){
            fast=fast->next;
        }
        else return -1;
    }
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    return slow->data;
}
};
int main(){
    node*head=NULL;
    ll list;
    head=list.create(head);
    list.traverse(head);
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    int ans=list.nth_node(head,n);
    cout<<ans<<endl;
    return 0;
}