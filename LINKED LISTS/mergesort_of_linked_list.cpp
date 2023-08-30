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
node*merge(node*a,node*b){
    node*head,*tail;
    if(a->data<=b->data){
        head=tail=a;
        a=a->next;
    }
    else{
        head=tail=b;
        b=b->next;
    }
    while(a!=NULL&&b!=NULL){
        if(a->data<=b->data){
            tail->next=a;
            tail=a;
            a=a->next;
        }
        else{
            tail->next=b;
            tail=b;
            b=b->next;
        }
    }
    while(a!=NULL){
        tail->next=a;
        tail=a;
        a=a->next;
    }
    while(b!=NULL){
        tail->next=b;
        tail=b;
        b=b->next;
    }
    return head;
}
node*get_mid(node*head){
    node*slow=head,*fast=head;
    while(fast->next!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
node*mergesort(node*head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node*mid=get_mid(head);
    node*left=head;
    node*right=mid->next;
    mid->next=NULL;
    node*a=mergesort(left);
    node*b=mergesort(right);
    node*ans=merge(a,b);
    return ans;
}
};
int main(){
    ll list;
    node*head=NULL;
    head=list.create(head);
    list.traverse(head);
    head=list.mergesort(head);
    list.traverse(head);
    return 0;
}