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
    int solve(node*&root){
        if(root==NULL) return 0;
        int l=solve(root->left);
        int r=solve(root->right);
        int temp=root->data;
        root->data=l+r;
        return l+r+temp;
    }
    node*convert(node*root){
        if(root==NULL) return NULL;
        solve(root);
        return  root;
    }
    void inorder(node*root){
        if(root==NULL) return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
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
    sl.inorder(ans);
}