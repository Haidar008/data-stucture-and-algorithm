#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
   for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0&&key<arr[j]){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
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
    insertion_sort(arr,n);
    print(arr,n);
    return 0;
}