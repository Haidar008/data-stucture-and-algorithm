#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void count_sort(int arr[],int n){
   int maxi=INT_MIN;
   for(int i=0;i<n;i++){
    maxi=max(arr[i],maxi);
   }
   int count[10];
   int brr[n];
   for(int i=0;i<=maxi;i++){
    count[i]=0;
   }
   for(int i=0;i<n;i++){
    count[arr[i]]++;
   }
   for(int i=1;i<=maxi;i++){
    count[i]+=count[i-1];
   }
   for(int i=n-1;i>=0;i--){
    brr[count[arr[i]]-1]=arr[i];
    count[arr[i]]--;
   }
   for(int i=0;i<n;i++){
    arr[i]=brr[i];
   }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,4,3,6,4,7,8,7,9,6,5,4,3,3,2,4,5,6,7,6,5,4,4,6,8,7,6,6,5,5,5,6,9,8,8,7,6,6,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    count_sort(arr,n);
    print(arr,n);
    return 0;
}