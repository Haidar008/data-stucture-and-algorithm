#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[low]);
    return j;
}
void quick_sort(int arr[],int low,int high){
    if(low<high){
   int pi=partition(arr,low,high);
   quick_sort(arr,low,pi-1);
   quick_sort(arr,pi+1,high);
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
    quick_sort(arr,0,n-1);
    print(arr,n);
    return 0;
}