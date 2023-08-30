#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>sort_array(vector<int>arr,int n,int k){
    vector<int>ans;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(k--){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
void print_array(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int k;
    cout<<"Enter the value of k "<<endl;
    cin>>k;
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    vector<int>arr;
    int ele;
    cout<<"Enter the elements into the array "
    "in such a way that it is atmost k position away "
    "from its original position as in sorted array "<<endl;
    for(int i=0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }
    cout<<"The array elements before sorting are "<<endl;
    print_array(arr,n);
    vector<int>ans=sort_array(arr,n,k);
    cout<<"The array elements after sorting are "<<endl;
    print_array(ans,n);
    return 0;
}