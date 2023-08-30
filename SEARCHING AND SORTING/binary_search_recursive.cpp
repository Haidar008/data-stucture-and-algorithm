#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int low,int high,int key){
    if(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key) return binary_search(arr,mid+1,high,key);
        else binary_search(arr,low,mid-1,key);
    }
    return -1;
}
int main(){
    int arr[]={1,2,4,6,7,18,29,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<binary_search(arr,0,n-1,4);
    return 0;
}