#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int kthlargest(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(arr[i]>pq.top()){
            pq.push(arr[i]);
            pq.pop();
        }
    }
    return pq.top();
}
int kthsmallest(int arr[],int n,int k){
    priority_queue<int>pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}
int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements into the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k "<<endl;
    cin>>k;
    cout<<"The kth largest element is "<<kthlargest(arr,n,k)<<endl;
    cout<<"The kth smallest element is "<<kthsmallest(arr,n,k)<<endl;
    return 0;
}