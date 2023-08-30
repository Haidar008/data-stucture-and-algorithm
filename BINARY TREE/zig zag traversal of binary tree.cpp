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
    vector<int>zigzag_traversal(node*root){
     vector<int>ans;
     if(root==NULL) return ans;
     queue<node*>q;
     q.push(root);
     int level=1;
     while(!q.empty()){
        int size=q.size();
        vector<int>level_ans;
        while(size--){
            node*temp=q.front();
            q.pop();
            level_ans.push_back(temp->data);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        if(level%2==0) reverse(level_ans.begin(),level_ans.end());
        for(int i=0;i<level_ans.size();i++){
            ans.push_back(level_ans[i]);
        }
        level++;
     }
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
    vector<int>ans=sl.zigzag_traversal(root);
    cout<<"The zigzag traversal is:"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}