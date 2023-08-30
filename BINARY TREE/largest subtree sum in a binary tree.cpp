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
    int solve(node*root,int&ans){
        if(root==NULL) return 0;
        int ls=solve(root->left,ans);
        int rs=solve(root->right,ans);
        int subtree_sum=ls+rs+root->data;
        ans=max(ans,subtree_sum);
        return subtree_sum;
    }
    int largest_sum(node*root){
        int ans=INT_MIN;
        solve(root,ans);
        return ans;
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
    int ans=sl.largest_sum(root);
    cout<<ans<<endl;
    return 0;
}