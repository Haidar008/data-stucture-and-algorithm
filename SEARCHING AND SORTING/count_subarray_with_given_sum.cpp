#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int subarray(int arr[],int n,int sum){
    int count=0;
    unordered_map<int,int>mp;
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
        if(s==sum) count++;
        if(mp.find(s-sum)!=mp.end()){
            count+=mp[s-sum];
        }
        mp[s]++;
    }
    return count;
}
int main(){
    int arr[6]={9,4,20,3,10,5};
    int n=6;
    int sum=33;
    int count=subarray(arr,n,sum);
    cout<<count<<endl;
    return 0;
}