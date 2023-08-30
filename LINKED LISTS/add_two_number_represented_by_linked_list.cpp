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
node*add_two_lists(node*first,node*second){
    first=reverse(first);
    second=reverse(second);
    node*res=NULL;
    node*curr=NULL;
    int sum=0;
    int carry=0;
    while(first!=NULL||second!=NULL){
        sum=carry+(first?first->data:0)+(second?second->data:0);
        carry=(sum>=10?1:0);
        sum=sum%10;
        node*newnode=new node(sum);
        if(res==NULL){
            res=newnode;
        }
        else{
            curr->next=newnode;
        }
        curr=newnode;
        if(first) first=first->next;
        if(second) second=second->next;
    }
    if(carry>0){
        node*temp=new node(carry);
        curr->next=temp;
        curr=temp;
    }
    res=reverse(res);
    return res;
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
    ll list;
    node*first=NULL;
    node*second=NULL;
    first=list.create(first);
    second=list.create(second);
    list.traverse(first);
    list.traverse(second);
    node*ans=list.add_two_lists(first,second);
    list.traverse(ans);
    return 0;
}