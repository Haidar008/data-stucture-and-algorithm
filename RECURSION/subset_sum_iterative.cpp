#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>subset_sum(vector<int>&arr,int n){
    vector<int>ans;
    ans.push_back(0);
    for(int i=0;i<n;i++){
        const int v=ans.size();
        for(int j=0;j<v;j++){
            ans.push_back(ans[j]+arr[i]);
        }
    }
    sort(ans.begin(),ans.end());
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
    vector<int>arr={1,2,3};
    int n=arr.size();
    vector<int>ans=subset_sum(arr,n);
    print(ans);
    return 0;
}