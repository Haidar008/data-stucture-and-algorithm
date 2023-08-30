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
    void recursive_postorder(node*root){
        if(root==NULL) return;
        recursive_postorder(root->left);
        recursive_postorder(root->right);
        cout<<root->data<<" ";
    }
    void iterative_postorder(node*root){
        stack<node*>s1,s2;
        s1.push(root);
        while(!s1.empty()){
            node*temp=s1.top();
            s1.pop();
            s2.push(temp);
            if(temp->left) s1.push(temp->left);
            if(temp->right) s1.push(temp->right); 
        }
        while(!s2.empty()){
            cout<<s2.top()->data<<" ";
            s2.pop();
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
    sl.recursive_postorder(root);
    cout<<endl;
    sl.iterative_postorder(root);
    return 0;
}