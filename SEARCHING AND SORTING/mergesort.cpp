#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int k=low;
    int brr[high+1];
    while(i<=mid&&j<=high){
        if(arr[i]<=arr[j]){
            brr[k++]=arr[i++];
        }
        else{
            brr[k++]=arr[j++];
        }
    }
    while(i<=mid){
        brr[k++]=arr[i++];
    }
    while(j<=high){
        brr[k++]=arr[j++];
    }
    for(int i=low;i<=high;i++){
        arr[i]=brr[i];
    }
}
void mergesort(int arr[],int low,int high){
    if(low<high){
        int mid=low+(high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,4,3,6,4,7,58,78,98,76,5,54,3,3,2,4,55,6,7,6,5,4,4,6,8,7,6,6,5,5,5,67,88,8,8,7,6,6,55,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    mergesort(arr,0,n-1);
    print(arr,n);
    return 0;
}