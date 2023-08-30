#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int ind,vector<int>v,vector<vector<int>>&ans,vector<int>arr){
    if(ind==arr.size()){
        ans.push_back(v);
        return;
    }
    solve(ind+1,v,ans,arr);
    v.push_back(arr[ind]);
    solve(ind+1,v,ans,arr);
}
vector<vector<int>>find_subsets(vector<int>arr){
    vector<vector<int>>ans;
    vector<int>v;
    solve(0,v,ans,arr);
    sort(ans.begin(),ans.end());
    return ans;
}
void print_subsets(vector<vector<int>>ans){
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<int>arr={1,2,3};
    vector<vector<int>>ans=find_subsets(arr);
    print_subsets(ans);
    return 0;
}