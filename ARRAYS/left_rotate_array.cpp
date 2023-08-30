#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void left_rotate(int arr[],int n,int d){
    d=d%n;
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[7]={2,5,3,4,0,3,89};
    int n=7;
    print(arr,n);
   left_rotate(arr,n,3);
    print(arr,n);
}