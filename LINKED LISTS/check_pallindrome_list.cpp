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
node*get_mid(node*head){
    node*slow=head,*fast=head;
    while(fast->next!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
bool ispallindrome(node*head){
    node*mid=get_mid(head);
    node*reverse_mid=reverse(mid->next);
    node*temp=head;
    while(reverse_mid!=NULL){
        if(reverse_mid->data!=temp->data){
            return false;
        }
        temp=temp->next;
        reverse_mid=reverse_mid->next;
    }
    return true;
}
};
int main(){
    ll list;
    node*head=NULL;
    head=list.create(head);
    list.traverse(head);
    bool ans=list.ispallindrome(head);
    cout<<ans<<endl;
    return 0;
}