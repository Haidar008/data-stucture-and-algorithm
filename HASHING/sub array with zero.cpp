#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool subarray_0(int arr[],int n){
   /* for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum==0){
                return true;
            }
        }
    }
    return false;*/


    unordered_set<int>s;
    int sum=0;
    for(int i=0;i<n;i++){
       sum=sum+arr[i];
       if(sum==0) return true;
       if(s.find(sum)!=s.end()) return true;
       s.insert(sum);
    }
    return false;
}
int main(){
    int arr[]={1,4,13,-3,-10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(subarray_0(arr,n)) cout<<"yes";
    else cout<<"no";
}