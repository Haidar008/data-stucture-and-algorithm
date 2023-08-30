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
        if(root==NULL) return 0;
        if(!root->left&&!root->right) return root->data;
        int lsum=solve(root->left,flag);
        int rsum=solve(root->right,flag);
        if(lsum+rsum!=root->data) flag=false;
        return lsum+rsum+root->data;
    }
    bool issumtree(node*root){
        bool flag=true;
        solve(root,flag);
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
    bool ans=sl.issumtree(root);
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}