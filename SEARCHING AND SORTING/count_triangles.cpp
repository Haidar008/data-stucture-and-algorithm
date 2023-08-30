#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count_triangle(int arr[],int n){
   sort(arr,arr+n);
   int count=0;
   for(int i=n-1;i>=2;i--){
    int low=0;
    int high=i-1;
    while(low<high){
        if(arr[low]+arr[high]>arr[i]){
            count+=high-low;
            high--;
        }
        else{
            low++;
        }
    }
   }
   return count;
}
int main(){
    int arr[]={6,4,9,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<count_triangle(arr,n);
    return 0;
}