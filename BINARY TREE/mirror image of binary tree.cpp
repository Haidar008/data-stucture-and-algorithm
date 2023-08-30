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
    void level_order(node*root){
        vector<int>ans;
        queue<node*>q;
        q.push(root);
        while(!q.empty()){
            node*temp=q.front();
            q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            cout<<temp->data<<" ";
        }
        cout<<endl;
    }
    void mirror_image(node*root){
        if(root==NULL) return;
        mirror_image(root->left);
        mirror_image(root->right);
        swap(root->left,root->right);
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
    cout<<"Before mirror the elements are:"<<endl;
    sl.level_order(root);
    sl.mirror_image(root);
    cout<<"After mirror the elements are:"<<endl;
    sl.level_order(root);
    return 0;
}