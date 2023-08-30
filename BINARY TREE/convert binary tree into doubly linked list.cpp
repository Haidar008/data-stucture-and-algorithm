#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*left,*right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
class solution{
    public:
    void solve(node*root,node*&head,node*&prev){
        if(root==NULL) return;
        solve(root->left,head,prev);
        if(head==NULL){
            head=prev=root;
        }
        else{
            prev->right=root;
            prev->right->left=prev;
            prev=prev->right;
        }
        solve(root->right,head,prev);
    }
    node*convert(node*root){
        node*head=NULL,*prev=NULL;
        solve(root,head,prev);
        head->left=NULL;
        prev->right=NULL;
        return head;
    }
    void traverse_dll(node*head){
        node*prev;
        cout<<"Forward traverse "<<endl;
        while(head){
            cout<<head->data<<" ";
            prev=head;
            head=head->right;
        }
        cout<<endl;
        while(prev){
            cout<<prev->data<<" ";
            prev=prev->left;
        }
        cout<<endl;
    }
};
int main(){
    node*p,*q,*r,*s,*t,*u;
    node*root=new node(56);
    p=new node(70);
    q=new node(23);
    r=new node(45);
    s=new node(67);
    t=new node(83);
    u=new node(92);
    root->left=p;
    root->right=q;
    p->left=r;
    p->right=s;
    q->left=t;
    q->right=u;
    solution sl;
    node*ans=sl.convert(root);
    sl.traverse_dll(ans);
    return 0;
}