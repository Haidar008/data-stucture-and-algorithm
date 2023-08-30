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
    int solve(node*root,bool &flag){
        if(root==NULL) return true;
        int lh=solve(root->left,flag);
        int rh=solve(root->right,flag);
        if(abs(lh-rh)>1) flag=0;
        return 1+max(lh,rh);
    }
    bool isbalanced(node*root){
        bool flag=true;
        int x=solve(root,flag);
        return flag;
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
    bool ans=sl.isbalanced(root);
    if(ans) cout<<"Balanced"<<endl;
    else cout<<"Not balanced"<<endl;
}