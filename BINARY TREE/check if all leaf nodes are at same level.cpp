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
    void solve(node*root,int level,unordered_set<int>&s){
        if(root==NULL) return;
        solve(root->left,level+1,s);
        solve(root->right,level+1,s);
        if(!root->left&&!root->right){
            s.insert(level);
        }
    }
    bool check_level(node*root){
        unordered_set<int>s;
        int level=0;
        solve(root,level,s);
        if(s.size()==1) return true;
        else return false;
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
    r->left=new node(90);
    solution sl;
    if(sl.check_level(root)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}