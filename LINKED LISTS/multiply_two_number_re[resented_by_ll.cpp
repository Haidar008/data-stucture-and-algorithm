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
long long multiply(node*first,node*second){
    long long m=1000000007;
    long long num1=0,num2=0;
    while(first!=NULL||second!=NULL){
        if(first){
            num1=(num1*10)%m+first->data;
            first=first->next;
        }
        if(second){
            num2=(num2*10)%m+second->data;
            second=second->next;
        }
    }
    return ((num1%m)*(num2%m))%m;
}
};
int main(){
    ll list;
    node*head1=NULL;
    node*head2=NULL;
    head1=list.create(head1);
    head2=list.create(head2);
    list.traverse(head1);
    list.traverse(head2);
    long long ans=list.multiply(head1,head2);
    cout<<"The answer is "<<ans<<endl;
    return 0;
}