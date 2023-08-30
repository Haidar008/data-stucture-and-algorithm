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
    vector<int>Diagonal_traversal(node*root){
        vector<int>ans;
        queue<node*>q;
        q.push(root);
        while(!q.empty()){
            node*temp=q.front();
            q.pop();
            while(temp!=NULL){
                ans.push_back(temp->data);
                if(temp->left) q.push(temp->left);
                temp=temp->right;
            }
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
    vector<int>ans=sl.Diagonal_traversal(root);
    cout<<"The Diagonal traversal is:"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}