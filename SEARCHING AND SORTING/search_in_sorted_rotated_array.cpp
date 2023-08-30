#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==key) return mid;
            else if(arr[low]<=arr[mid]){
                if(key<arr[mid]&&key>=arr[low]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(key>arr[mid]&&key<=arr[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
}
int main(){
    int arr[]={5,6,7,8,9,10,1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int loc=search(arr,n,2);
    cout<<loc<<endl;
    return 0;
}