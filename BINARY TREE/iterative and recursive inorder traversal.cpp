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
    void recursive_inorder(node*root){
        if(root==NULL) return;
        recursive_inorder(root->left);
        cout<<root->data<<" ";
        recursive_inorder(root->right);
    }
    void iterative_inorder(node*root){
        stack<node*>s;
        node*temp=root;
        while(true){
            if(temp!=NULL){
                s.push(temp);
                temp=temp->left;
            }
            else{
                if(s.empty()) break;
                temp=s.top();
                s.pop();
                cout<<temp->data<<" ";
                temp=temp->right;
            }
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
    sl.recursive_inorder(root);
    cout<<endl;
    sl.iterative_inorder(root);
    return 0;
}