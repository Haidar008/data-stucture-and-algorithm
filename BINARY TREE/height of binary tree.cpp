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
    int recursive_height(node*root){
        if(root==NULL) return 0;
        int lh=recursive_height(root->left);
        int rh=recursive_height(root->right);
        return 1+max(lh,rh);
    }
    int iterative_height(node*root){
        queue<node*>q;
        int height=0;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            node*temp=q.front();
            q.pop();
            if(temp==NULL) height++;
            if(temp!=NULL){
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            }
            if(temp==NULL&&!q.empty()){
                q.push(NULL);
            }
        }
        return height;
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
    int h1=sl.recursive_height(root);
    int h2=sl.iterative_height(root);
    cout<<h1<<endl;
    cout<<h2<<endl;
    return 0;
}