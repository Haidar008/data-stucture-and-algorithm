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
    void recursive_preorder(node*root){
        if(root==NULL) return;
        cout<<root->data<<" ";
        recursive_preorder(root->left);
        recursive_preorder(root->right);
    }
    void iterative_preorder(node*root){
        stack<node*>s;
        s.push(root);
        while(!s.empty()){
            node*temp=s.top();
            s.pop();
            cout<<temp->data<<" ";
            if(temp->right) s.push(temp->right);
            if(temp->left) s.push(temp->left);
        }
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
    sl.recursive_preorder(root);
    cout<<endl;
    sl.iterative_preorder(root);
    return 0;
}