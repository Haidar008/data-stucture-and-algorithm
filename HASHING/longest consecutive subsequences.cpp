#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int long_conse_subse(int arr[],int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int length=0;
        if(s.find(arr[i]-1)!=s.end()){
            continue;
        }
        if(s.find(arr[i]-1)==s.end()){
            int j=arr[i];
            while(s.find(j)!=s.end()){
                length++;
                j++;
            }
            ans=max(ans,length);
        }
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,4,6,7,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<long_conse_subse(arr,n);
    return 0;
}