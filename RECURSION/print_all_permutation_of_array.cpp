#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int index,vector<vector<int>>&ans,vector<int>arr){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=index;i<arr.size();i++){
        swap(arr[i],arr[index]);
        solve(index+1,ans,arr);
        swap(arr[i],arr[index]);
    }
}
vector<vector<int>>find_permutation(vector<int>arr){
            vector<vector<int>>ans;
            solve(0,ans,arr);
            return ans;
}
void print_permutation( vector<vector<int>>ans){
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements into array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>ans=find_permutation(arr);
    print_permutation(ans);
    return 0;
}