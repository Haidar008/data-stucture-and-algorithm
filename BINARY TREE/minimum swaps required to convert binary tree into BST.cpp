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
    void inorderT(node*root,vector<int>&inorder){
        if(root==NULL) return;
        inorderT(root->left,inorder);
        inorder.push_back(root->data);
        inorderT(root->right,inorder);
    }
    int min_swap(node*root){
        vector<int>inorder;
        inorderT(root,inorder);
        vector<int>actual=inorder;
        sort(actual.begin(),actual.end());
        unordered_map<int,int>mp;
        for(int i=0;i<actual.size();i++){
            mp[actual[i]]=i;
        }
        int swaps=0;
        for(int i=0;i<inorder.size();i++){
            if(inorder[i]!=actual[i]){
                int actualindex=mp[inorder[i]];
                swap(inorder[i],inorder[actualindex]);
                swaps++;
                i--;
            }
        }
        return swaps;
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
    int ans=sl.min_swap(root);
    cout<<"the min swap is "<<ans<<endl;
    return 0;
}