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
    void print_left(node*root,vector<int>&ans){
        if(root==NULL||(!root->left&&!root->right)) return;
        if(root->left){
            ans.push_back(root->data);
            print_left(root->left,ans);
        }
        else if(root->right){
            ans.push_back(root->data);
            print_left(root->right,ans);
        }
    }
    void print_leaf(node*root,vector<int>&ans){
        if(root==NULL) return;
        if(!root->left&&!root->right) ans.push_back(root->data);
        print_leaf(root->left,ans);
        print_leaf(root->right,ans);
    }
    void print_right_reverse(node*root,vector<int>&ans){
        if(root==NULL||(!root->left&&!root->right)) return;
        if(root->right){
            print_left(root->right,ans);
            ans.push_back(root->data);
        }
        else if(root->left){
            print_left(root->left,ans);
            ans.push_back(root->data);
        }
    }
    vector<int>Boundary_traversal(node*root){
        vector<int>ans;
        if(root==NULL) return ans;
        if(root->left||root->right) ans.push_back(root->data);
        print_left(root->left,ans);
        print_leaf(root,ans);
        print_right_reverse(root->right,ans);
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
    vector<int>ans=sl.Boundary_traversal(root);
    cout<<"The Boundary traversal is:"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}