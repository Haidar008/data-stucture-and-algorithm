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
    node*create_loop(node*head){
        node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        return head;
    }
    bool detect_loop(node*head){
        node*slow=head,*fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
    void remove_loop(node*head){
        if(head==NULL||head->next==NULL){
            return;
        }
        node*slow=head;
        node*fast=head;
        node*prev=NULL;
        while(fast!=NULL&&fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
    if(fast==NULL||fast->next==NULL){
        return;
    }
    if(slow==fast){
        prev->next=NULL;
        return ;
    }
    slow=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
    return;
    }
};
int main(){
    node*head=NULL;
    ll l;
    head=l.create(head);
    head=l.create_loop(head);
    //l.traverse(head);
    cout<<l.detect_loop(head)<<endl;
    l.remove_loop(head);
    l.traverse(head);
    return 0;
}