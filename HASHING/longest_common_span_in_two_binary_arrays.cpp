#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int longest_subarray(int arr1[],int arr2[],int n){
    int arr3[n];
    for(int i=0;i<n;i++){
        arr3[i]=arr1[i]-arr2[i];
    }
    unordered_map<int,int>mp;
    int sum=0;
    int length=0;
    for(int i=0;i<n;i++){
        sum+=arr3[i];
        if(sum==0) length=i+1;
        if(mp.find(sum)!=mp.end()){
            length=max(length,i-mp[sum]);
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
    }
    return length;
}
int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int arr1[n];
    int arr2[n];
    cout<<"Enter the element in arrray 1"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the element in array two "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int ans=longest_subarray(arr1,arr2,n);
    cout<<"The length is "<<ans<<endl;
    return 0;
}