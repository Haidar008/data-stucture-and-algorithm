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
void find_pairs(node*head,int sum){

    node*start=head;
    node*end=head;
    while(end->next!=NULL){
        end=end->next;
    }
    while(start!=end&&end->next!=start){
        if(start->data+end->data==sum){
            cout<<"("<<start->data<<","<<end->data<<")"<<" ";
            start=start->next;
            end=end->prev;
        }
        else if(start->data+end->data>sum){
            end=end->prev;
        }
        else{
            start=start->next;
        }
    }
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
    list.find_pairs(head,sum);
    return 0;
}