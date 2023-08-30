#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>kth_largest(vector<int>arr,int n,int k){
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<int>ans;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()<k){
            ans.push_back(-1);
        }
        else if(pq.size()==k){
            ans.push_back(pq.top());
        }
        else{
            pq.pop();
            ans.push_back(pq.top());
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    vector<int>arr;
    int ele;
    cout<<"Enter the elements into the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }
    int k;
    cout<<"Enter the value of k "<<endl;
    cin>>k;
    vector<int>ans=kth_largest(arr,n,k);
    cout<<"The answers are "<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}