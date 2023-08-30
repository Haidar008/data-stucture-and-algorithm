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
void traversal(node*head){
    node*temp=head;
    if(temp==NULL){
        return;
    }
    cout<<temp->data<<" ";
    traversal(temp->next);
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
    traversal(head);
}
