#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int first(int arr[],int n,int key){

    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>key){
            high=mid-1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            if(mid==0||arr[mid-1]!=arr[mid]){
                 return mid;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}
int last(int arr[],int n,int key){

     int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>key){
            high=mid-1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            if(mid==n-1||arr[mid+1]!=arr[mid]){
                 return mid;
            }
            else{
                low=mid+1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,2,2,3,3,4,4,6,6,6,6,6,6,6,6,6,6,6,7,18,29,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int first_occ=first(arr,n,29);
    int last_occ=last(arr,n,29);
    int total_occ=last_occ-first_occ+1;
    cout<<first_occ<<endl;
    cout<<last_occ<<endl;
    cout<<total_occ<<endl;
    return 0;
}