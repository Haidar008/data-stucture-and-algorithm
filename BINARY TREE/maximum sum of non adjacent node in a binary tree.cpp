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
    int solve(node*root,unordered_map<node*,int>&dp){
        if(root==NULL) return 0;
        if(dp[root]) return dp[root];
        int include=root->data;
        if(root->left){
            include+=solve(root->left->left,dp);
            include+=solve(root->left->right,dp);
        }
        if(root->right){
            include+=solve(root->right->left,dp);
            include+=solve(root->right->right,dp);
        }
        int exclude=0;
        exclude+=solve(root->left,dp);
        exclude+=solve(root->right,dp);
        dp[root]=max(include,exclude);
        return dp[root];
    }
    int max_sum(node*root){
       unordered_map<node*,int>dp;
       int sum=solve(root,dp);
       return  sum;
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
    int ans=sl.max_sum(root);
    cout<<ans<<endl;
    return 0;
}