#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool is_possible(int arr[],int n,int k,int barrier){
    int student=1;
    int sum_allocated=0;
    for(int i=0;i<n;i++){
        if(sum_allocated+arr[i]>barrier){
            student++;
            sum_allocated=arr[i];
            if(sum_allocated>barrier) return false;
        }
        else{
            sum_allocated+=arr[i];
        }
    }
    if(student<=k) return true;
        else return false;
}
int allocate_books(int arr[],int n,int k){
    if(n<k) return -1;
    int low=arr[0];
    int high=0;
    for(int i=0;i<n;i++){
        low=min(arr[i],low);
        high=high+arr[i];
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
    int arr[4]={12,34,67,90};
    int n=4;
    int k=2;
    cout<<allocate_books(arr,n,k);
    return 0;
}