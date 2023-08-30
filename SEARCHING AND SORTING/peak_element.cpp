#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int peak_element(int arr[],int n){
   int low=0;
   int high=n-1;
   while(low<=high){
    int mid=low+(high-low)/2;
    if(mid==0&&arr[mid+1]<=arr[mid]){
        return arr[mid];
    }
    if(mid==n-1&&arr[mid-1]<=arr[mid]){
        return arr[mid];
    }
    if(arr[mid+1]<=arr[mid]&&arr[mid-1]<=arr[mid]){
         return arr[mid];
    }
    if(mid>0&&arr[mid-1]>=arr[mid]){
        high=mid-1;
    }
    else{
        low=mid+1;
    }

   }
   return -1;
}
int main(){
    int arr[]={1,2,4,56,7,6,454,333,67,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<peak_element(arr,n);
    return 0;
}