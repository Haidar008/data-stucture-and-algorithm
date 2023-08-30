#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int ind,vector<int>&ans,vector<int>&arr,int n,int sum){
    if(ind==n){
        ans.push_back(sum);
        return;
    }
    solve(ind+1,ans,arr,n,sum+arr[ind]);
    solve(ind+1,ans,arr,n,sum);
}
vector<int>subset_sum(vector<int>&arr,int n){
    vector<int>ans;
    solve(0,ans,arr,n,0);
    //sort(ans.begin(),ans.end());
    return ans;
}
void print(vector<int>arr){
    cout<<"The subset sum are "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr={1,2,3,4};
    int n=arr.size();
    vector<int>ans=subset_sum(arr,n);
    print(ans);
    return 0;
}