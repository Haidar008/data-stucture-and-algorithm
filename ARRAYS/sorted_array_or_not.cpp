#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sorted(int arr[],int n){
   if(n==0||n==1) return 1;
   for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]) return 0;
   }
   return 1;
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={1,2,6,4,5,6};
    int n=6;
    cout<<sorted(arr,n)<<endl;
}