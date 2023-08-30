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
node*segregate(node*head){
    node*even=NULL;
    node*odd=NULL;
    node*e=NULL;
    node*o=NULL;
    while(head!=NULL){
        if(head->data%2==0){
            if(even==NULL){
                even=head;
                e=head;
            }
            else{
                e->next=head;
                e=e->next;
            }
        }
        else{
            if(odd==NULL){
                odd=head;
                o=head;
            }
            else{
                o->next=head;
                o=o->next;
            }
        }
        head=head->next;
    }
    if(even) e->next=odd;
    if(odd) o->next=NULL;
    if(even) return even;
    else return odd;
}
};
int main(){
    ll list;
    node*head=NULL;
    head=list.create(head);
    list.traverse(head);
    head=list.segregate(head);
    list.traverse(head);
    return 0;
}