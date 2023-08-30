#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int longest_subarray(int arr[],int n,int k){
    unordered_map<int,int>mp;
    int sum=0;
    int length=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k) length=i+1;
        if(mp.find(sum-k)!=mp.end()){
            length=max(length,i-mp[sum-k]);
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
    }
    return length;
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
    int sum;
    cout<<"enter the sum "<<endl;
    cin>>sum;
    int ans=longest_subarray(arr,n,sum);
    cout<<"The length is "<<ans<<endl;
    return 0;
}