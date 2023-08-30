#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class pascal{
    public:
    vector<int>nth_row_iterative(int n){
        vector<int>ans;
        ans.push_back(1);
        int prev=1;
        for(int r=1;r<=n;r++){
            int nCr=(prev*(n-r+1))/r;
            ans.push_back(nCr);
            prev=nCr;
        }
        return ans;
    }
    void solve(int r,vector<int>&v,int prev,int n){
        if(r>n){
            return;
        }
        int nCr=(prev*(n-r+1))/r;
        v.push_back(nCr);
        solve(r+1,v,nCr,n);
    }
    vector<int>nth_row_recursive(int n){
        vector<int>v;
        int prev=1;
        v.push_back(prev);
        solve(1,v,prev,n);
        return v;
    }
    void print(vector<int>&arr){
        cout<<"The "<<arr.size()-1<<"th row of pascal triangle is:"<<endl;
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter the row "<<endl;
    cin>>n;
    pascal pa;
    vector<int>ans1=pa.nth_row_iterative(n);
    vector<int>ans2=pa.nth_row_recursive(n);
    pa.print(ans1);
    pa.print(ans2);
    return 0;
}