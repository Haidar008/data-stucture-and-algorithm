#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insert(int arr[],int n,int value,int position){
    for(int i=n-1;i>=position-1;i--){
        arr[i+1]=arr[i];
    }
    arr[position]=value;
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[7]={1,2,3,4,5,6};
    int n=7;
    int position=3;
    insert(arr,n,67,position);
    print(arr,n);
    return 0;
}