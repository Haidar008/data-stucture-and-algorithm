#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string declare_winner(string arr[],int n){
    unordered_map<string,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    string ans;
    int maxi=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second>maxi){
            maxi=it->second;
            ans=it->first;
        }
        else if(it->second==maxi){
            ans=min(ans,it->first);
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string ans=declare_winner(arr,n);
    cout<<"The winner is "<<ans<<endl;
    return 0;
}