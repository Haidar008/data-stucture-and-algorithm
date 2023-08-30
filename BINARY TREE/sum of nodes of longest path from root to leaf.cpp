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
    vector<int>solve(node*root){
        if(root==NULL) return{0,0};
        vector<int>l=solve(root->left);
        vector<int>r=solve(root->right);
        if(l[0]<r[0]) return {1+r[0],r[1]+root->data};
        else if(l[0]>r[0]) return {1+l[0],l[1]+root->data};
        else return  {1+l[0],max(l[1],r[1])+root->data};

    }
   int long_path_sum(node*root){
    vector<int>ans=solve(root);
    return ans[1];
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
    int ans=sl.long_path_sum(root);
    cout<<ans<<endl;
    return 0;
}