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
node*sort(node*head){
    node*ptr=head;
    int count[3]={0};
    while(ptr!=NULL){
        count[ptr->data]++;
        ptr=ptr->next;
    }
    node*temp=head;
    while(temp!=NULL){
        if(count[0]>0){
            temp->data=0;
            count[0]--;
        }
        else if(count[1]>0){
            temp->data=1;
            count[1]--;
        }
        else{
            temp->data=2;
            count[2]--;
        }
        temp=temp->next;
    }
    return head;
}
};
int main(){
    ll list;
    node*head=NULL;
    head=list.create(head);
    cout<<"before sorting "<<endl;
    list.traverse(head);
    head=list.sort(head);
    cout<<"after sorting "<<endl;
    list.traverse(head);
    return 0;
}