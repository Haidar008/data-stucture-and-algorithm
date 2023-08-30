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
node*intersection(node*first,node*second){
    node*res=NULL;
    node*curr=NULL;
    while(first!=NULL&&second!=NULL){
        if(first->data<second->data){
            first=first->next;
        }
        else if(second->data<first->data){
            second=second->next;
        }
        else{
            node*newnode=new node(first->data);
            if(res==NULL){
                res=newnode;
            }
            else{
                curr->next=newnode;
            }
            curr=newnode;
            first=first->next;
            second=second->next;
        }
    }
    return res;
}
};
int main(){
    ll list;
    node*first=NULL;
    node*second=NULL;
    first=list.create(first);
    second=list.create(second);
    list.traverse(first);
    list.traverse(second);
    node*ans=list.intersection(first,second);
    list.traverse(ans);
    return 0;
}