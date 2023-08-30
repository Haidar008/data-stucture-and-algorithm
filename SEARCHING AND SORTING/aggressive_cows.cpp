#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool can_place_cows(int arr[],int n,int k,int distance){
    int cows=1;
    int current_stall=arr[0];
    for(int i=1;i<n;i++){
        if((arr[i]-current_stall)>=distance){
            cows++;
            if(cows==k) return true;
            current_stall=arr[i];
        }
    }
    return false;
}
int minimum_distance(int arr[],int n,int k){
    sort(arr,arr+n);
    int low=1;
    int high=arr[n-1]-arr[0];
    while(low<=high){
        int mid=low+(high-low)/2;
        if(can_place_cows(arr,n,k,mid)){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}
int main(){
    int arr[5]={1,2,8,4,9};
    int k=3;
    int n=5;
    cout<<minimum_distance(arr,n,k);
    return 0;
}