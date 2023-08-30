#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count_subarrays(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[i]=-1;
        }
    }
    int count=0;
    unordered_map<int,int>mp;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0) count++;
        if(mp.find(sum)!=mp.end()){
            count+=mp[sum];
        }
        mp[sum]++;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements into array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=count_subarrays(arr,n);
    cout<<count<<endl;
    return 0;
}