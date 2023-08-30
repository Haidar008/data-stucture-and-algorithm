#include<iostream>
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
    private:
    node*find_lca(node*root,int a,int b){
        if(root==NULL) return NULL;
        if(root->data==a||root->data==b) return root;
        node*left=find_lca(root->left,a,b);
        node*right=find_lca(root->right,a,b);
        if(!left) return right;
        if(!right) return left;
        else return root;
    }
    void dis(node*root,int &d,int k,int res){
        if(root==NULL) return;
        if(root->data==k){
            d=res;
            return;
        }
        dis(root->left,d,k,res+1);
        dis(root->right,d,k,res+1);
    }
    public:
    int find_dis(node*root,int a,int b){
        node*lca=find_lca(root,a,b);
        int d1,d2;
        dis(lca,d1,a,0);
        dis(lca,d2,b,0);
        return d1+d2;
    }
};
int main(){
    node*root=new node(1);
    node*p=new node(2);
    node*q=new node(4);
    node*r=new node(3);
    node*s=new node(7);
    node*t=new node(9);
    root->left=p;
    root->right=q;
    p->left=r;
    q->left=s;
    s->right=t;
    solution sl;
    int distance=sl.find_dis(root,2,9);
    cout<<"The distance between two nodes are "<<distance<<endl;
    return 0;
}