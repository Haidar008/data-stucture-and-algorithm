#include<iostream>
#include<bits/stdc++.h>
using namespace std;
priority_queue<int>pq1;
priority_queue<int,vector<int>,greater<int>>pq2;
void balance_and_calculate(vector<int>&ans){
    //balancing heap
    if(pq1.size()>pq2.size()+1){
        pq2.push(pq1.top());
        pq1.pop();
    }
    else if(pq2.size()>pq1.size()){
        pq1.push(pq2.top());
        pq2.pop();
    }
    //calculate median
    int median;
    if(pq1.size()==pq2.size()){
        median=(pq1.top()+pq2.top())/2;
    }
    else{
        median=pq1.top();
    }
    ans.push_back(median);
}
void insert_in_stream(vector<int>arr,int n,vector<int>&ans){
    for(int i=0;i<n;i++){
        if(pq1.size()==0||pq1.top()>arr[i]){
            pq1.push(arr[i]);
        }
        else{
            pq2.push(arr[i]);
        }
        balance_and_calculate(ans);
    }
}
vector<int>median_in_stream(vector<int>arr,int n){
    vector<int>ans;
    insert_in_stream(arr,n,ans);
    return ans;
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
    vector<int>ans=median_in_stream(arr,n);
    cout<<"The medians are as follows "<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}