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
    node*temp;
    int n;
    cout<<"enter the number of nodes "<<endl;
    cin>>n;
    cout<<"please enter the element in sorted order"<<endl;
    for(int i=0;i<n;i++){
        int item;
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
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int count_pairs(int val,node*first,node*second,int value){
    int count=0;
    while(first!=second&&second->next!=first){
        if(first->data+second->data==value){
            cout<<"("<<val<<","<<first->data<<","<<second->data<<")"<<" ";
            count++;
            first=first->next;
            second=second->prev;
        }
        else if(first->data+second->data>value){
            second=second->prev;
        }
        else{
            first=first->next;
        }
    }
    return count;
}
int count_triplets(node*head,int sum){
    if(head==NULL) return 0;
    node*curr=head;
    node*first,*second=head;
    while(second->next!=NULL){
        second=second->next;
    }
    int count=0;
    while(curr!=NULL){
        first=curr->next;
        count+=count_pairs(curr->data,first,second,sum-curr->data);
        curr=curr->next;
    }
    return count;
}
};
int main(){
    DLL list;
    node*head=NULL;
    head=list.create(head);
    list.traverse(head);
    int sum;
    cout<<"enter the sum "<<endl;
    cin>>sum;
    cout<<"the answer is "<<list.count_triplets(head,sum)<<endl;
    return 0;
}