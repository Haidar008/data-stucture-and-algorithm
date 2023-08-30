#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool pair_diff(int arr[],int n,int k){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        if(k==0&&mp[arr[i]]>1){
            return true;
        }
    }
        if(k==0) return false;
        for(int i=0;i<n;i++){
            if(mp.find(k+arr[i])!=mp.end()) return true;
        }
        return false;
}
int main(){
    int arr[6]={5,20,3,80,2,5};
    int n=6;
    int diff=60;
    bool ans=pair_diff(arr,n,diff);
    cout<<ans<<endl;
    return 0;
}