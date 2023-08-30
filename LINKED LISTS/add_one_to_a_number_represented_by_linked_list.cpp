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
class linkedlist{
    public:
    node*create(node*head){
        if(head!=NULL) {
            cout<<"linked list already exist "<<endl;
            return head;
        }
        int n,item;
        node*temp;
        cout<<"enter the no of nodes"<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<"enter the value of the element "<<endl;
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
    node*add_one(node*head){
        head=reverse(head);
        node*curr=head;
        while(curr!=NULL){
            if(curr->next!=NULL&&curr->data==9){
                curr->data=1;
                node*newnode=new node(0);
                newnode->next=head;
                head=newnode;
            }
            else if(curr->data==9){
                curr->data=0;
                curr=curr->next;
            }
            else{
                curr->data=curr->data+1;
                curr=curr->next;
                break;
            }
        }
        head=reverse(head);
    }
    void traverse(node*head){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    node*head=NULL;
    linkedlist ll;
    head=ll.create(head);
    ll.traverse(head);
    head=ll.add_one(head);
    ll.traverse(head);
    return 0;
}