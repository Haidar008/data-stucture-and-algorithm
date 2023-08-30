#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool is_possible(int arr[],int n,int k,int barrier){
    int painter=1;
    int board_allocated=0;
    for(int i=0;i<n;i++){
        if(board_allocated+arr[i]>barrier){
            painter++;
            board_allocated=arr[i];
            if(arr[i]>barrier) return false;
        }
        else{
            board_allocated+=arr[i];
        }
    }
    if(painter<=k) return true;
    else return false;
}
int minimum_time_required(int arr[],int n,int k){
    int low=0;
    int high=0;
    for(int i=0;i<n;i++){
        high+=arr[i];
    }
    while(low<=high){
        int mid=low+(high-low)/2;
        if(is_possible(arr,n,k,mid)){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
     return low;
}
int main(){
    int arr[5]={5,10,30,20,15};
    int n=5;
    int k=3;
    cout<<minimum_time_required(arr,n,k);
    return 0;
}