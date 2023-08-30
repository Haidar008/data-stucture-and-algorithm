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
    vector<int>reversed_level_order(node*root){
     vector<int>ans;
     queue<node*>q;
     stack<node*>s;
     q.push(root);
     while(!q.empty()){
        node*temp=q.front();
        q.pop();
        if(temp->right) q.push(temp->right);
        if(temp->left) q.push(temp->left);
        s.push(temp);
     }   
     while(!s.empty()){
        ans.push_back(s.top()->data);
        s.pop();
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
    vector<int>ans=sl.reversed_level_order(root);
    cout<<"The reversed level order traversal is:"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}