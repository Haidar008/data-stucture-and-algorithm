//cost to join two ropes is sum of their length
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int calculate(vector<int>arr,int n){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int ans=0;
    while(pq.size()>1){
        int small=pq.top();
        pq.pop();
        int second_small=pq.top();
        pq.pop();
        ans+=small+second_small;
        pq.push(small+second_small);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the no ropes to be joined "<<endl;
    cin>>n;
    vector<int>arr;
    cout<<"Enter the length of each rope "<<endl;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }
    int total_cost=calculate(arr,n);
    cout<<"The minimum cost to calculate all ropes are "<<total_cost<<endl;
    return 0;
}