#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[],int n){
    int low=0;
    int high=n-1;
    if(arr[0]<arr[n-1]){return arr[0];}
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid!=0&&arr[mid]<arr[mid-1]) return arr[mid];
        if(mid!=n-1&&arr[mid]>arr[mid+1]) return arr[mid+1];
        if(arr[low]<=arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={5,6,7,8,9,10,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int piv=pivot(arr,n);
    cout<<piv<<endl;
    return 0;
}