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
    node*LCA(node*root,int n1,int n2){
       if(root==NULL) return NULL;
       if(root->data==n1||root->data==n2) return root;
       node*left=LCA(root->left,n1,n2);
       node*right=LCA(root->right,n1,n2);
       if(!left&&!right) return NULL;
       if(!left) return right;
       if(!right) return left;
       else return root;
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
    node*lca=sl.LCA(root,92,45);
    cout<<lca->data<<endl;
    return 0;
}