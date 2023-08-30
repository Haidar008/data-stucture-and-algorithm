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
    int n,item;
    node*temp;
    cout<<"enter the no of nodes "<<endl;
    cin>>n;
    cout<<"enter the elemets of linked list "<<endl;
    for(int i=0;i<n;i++){
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
    node*p;
    cout<<"forward traversal "<<endl;
    while(temp!=NULL){
        p=temp;
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"backward traversal "<<endl;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->prev;
    }
    cout<<endl;
}
node*reverse(node*head){
    node*ptr1=head;
    node*ptr2=head->next;
    ptr1->next=NULL;
    ptr1->prev=ptr2;
    while(ptr2!=NULL){
        ptr2->prev=ptr2->next;
        ptr2->next=ptr1;
        ptr1=ptr2;
        ptr2=ptr2->prev;
    }
    return ptr1;
}
};
int main(){
    DLL list;
    node*head=NULL;
    head=list.create(head);
    list.traverse(head);
    head=list.reverse(head);
    list.traverse(head);
    return 0;
}