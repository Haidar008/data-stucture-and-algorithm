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
    void solve(node*root,string s,int &i){
        int sum=0;
        while(i<s.size()&&isdigit(s[i])){
            sum=sum*10+s[i]-'0';
            i++;
        }
        root->data=sum;
        if(i<s.size()&&s[i]=='('){
            i++;
            if(i<s.size()&&s[i]==')'){
                root->left=NULL;
                i++;
            }
            else{
                root->left=new node(0);
                solve(root->left,s,i);
            }
        }
        if(i<s.size()&&s[i]=='('){
            i++;
            if(i<s.size()&&s[i]==')'){
                root->right=NULL;
                i++;
            }
            else{
                root->right=new node(0);
                solve(root->right,s,i);
            }
        }
        if(s[i]==')'){
            i++;
            return;
        }
    }
    node*construct_tree(string s){
        node*root=new node(0);
        int i=0;
        solve(root,s,i);
        return root;
    }
    void inorder(node*root){
        if(root==NULL) return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
};
int main(){
    string s;
    cout<<"Enter a valid string "<<endl;
    cin>>s;
    solution sl;
    node*ans=sl.construct_tree(s);
    sl.inorder(ans);
    return 0;
}