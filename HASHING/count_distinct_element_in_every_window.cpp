#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>count_distinct(int arr[],int n,int k){
    vector<int>v;
    unordered_map<int,int>mp;
    for(int i=0;i<k;i++){
        mp[arr[i]]++;
    }
    int distinct=mp.size();
    v.push_back(distinct);
    for(int i=k;i<n;i++){
        if(mp[arr[i-k]]==1){
            distinct--;
        }
        mp[arr[i-k]]--;
        if(mp[arr[i]]==0){
            distinct++;
        }
        mp[arr[i]]++;
        v.push_back(distinct);
    }
    return v;
}
int main(){
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the size of window "<<endl;
    cin>>k;
    vector<int>ans=count_distinct(arr,n,k);
    for(int j=0;j<ans.size();j++){
        cout<<ans[j]<<" ";
    }
    cout<<endl;
    return 0;
}