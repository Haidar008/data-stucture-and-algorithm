#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int last,int n,int num,vector<int>&ans){
    if(n==0){
        ans.push_back(num);
        return;
    }
    for(int i=last;i<=9;i++){
        int a=num*10+i;
        solve(i+1,n-1,a,ans);
    }
}
vector<int>print(int n){
    vector<int>ans;
    solve(1,n,0,ans);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    vector<int>ans=print(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}