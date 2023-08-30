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
    node*remove_duplicates(node*head){
        node*temp=head->next;
        node*prev=head;
        while(temp!=NULL){
            if(prev->data==temp->data){
                prev->next=temp->next;
                temp=temp->next;
            }
            else{
                temp=temp->next;
                prev=prev->next;
            }
        }
        return head;
    }
};
int main(){
    node*head=NULL;
    ll l;
    head=l.create(head);
    l.traverse(head);
    head=l.remove_duplicates(head);
    l.traverse(head);
    return 0;
}