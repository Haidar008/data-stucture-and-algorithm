#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool subarray_given_sum(int arr[],int n,int k){
    //note two approach cannot be used in this;
    unordered_set<int>s;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum==k) return true;
        if(s.find(sum-k)!=s.end()) return true;
        s.insert(sum);
    }
    return false;
}
int main(){
    int arr[]={12,4,4,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter sum"<<endl;
    int sum;
    cin>>sum;
    if(subarray_given_sum(arr,n,sum)) cout<<"yes"<<endl;
    else cout<<"no";
}