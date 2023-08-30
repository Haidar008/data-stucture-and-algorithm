#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Brute force approach
int kth_largest_sum(vector<int>arr,int k){
    priority_queue<int,vector<int>,greater<int>>pq;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            pq.push(sum);
            if(pq.size()>k){
                pq.pop();
            }
        }
    }
    return pq.top();
}
int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    vector<int>arr;
    cout<<"Enter the elements into the array "<<endl;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }
    int k;
    cout<<"Enter the value of k "<<endl;
    cin>>k;
    cout<<kth_largest_sum(arr,k)<<endl;
    return 0;
}