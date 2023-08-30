#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void traverse(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
struct node*merge(struct node*a,struct node*b){
    struct node*head=NULL,*tail;
    if(a==NULL) return b;
    if(b==NULL) return a;
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
struct node*middle(struct node*head){
    struct node*fast=head;
    struct node*slow=head;
    while(fast->next!=NULL&&slow->next->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}
struct node*mergesort(struct node*head){
    struct node*mid=middle(head);
    struct node*left=head;
    struct node*right=mid->next;
    mid->next=NULL;
    left=mergesort(left);
    right=mergesort(right);
    struct node*ans=merge(left,right);
    return ans;
    }
int main(){
    node*head=NULL;
    node*newnode=new node(10);
    node*temp=new node(35);
    node*temp1=new node(90);
    node*temp2=new node(45);
    node*temp3=new node(56);
    node*temp4=new node(37);
    head=newnode;
    newnode->next=temp;
    temp->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=NULL;
    traverse(head);
    mergesort(head);
}