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
    vector<int>Top_view(node*root){
        vector<int>ans;
        int leftmost;
        if(root==NULL) return ans;
        queue<pair<node*,int>>q;
        unordered_map<int,int>mp;
        q.push({root,0});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            node*temp=it.first;
            int line=it.second;
            leftmost=min(leftmost,line);
            if(mp.find(line)==mp.end()){
                mp[line]=temp->data;
            }
            if(temp->left) q.push({temp->left,line-1});
            if(temp->right) q.push({temp->right,line+1});
        }
        while(!mp.empty()){
            ans.push_back(mp[leftmost]);
            mp.erase(leftmost);
            leftmost++;
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
    vector<int>ans=sl.Top_view(root);
    cout<<"The Top view of binary tree is:"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}