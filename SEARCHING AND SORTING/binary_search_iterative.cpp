#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,4,6,7,18,29,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<binary_search(arr,n,6);
    return 0;
}