#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>merge_two(vector<int>arr,vector<int>brr){
    vector<int>ans;
    int i=0;
    int j=0;
    while(i<arr.size()&&j<brr.size()){
        if(arr[i]<=brr[j]){
            ans.push_back(arr[i++]);
        }
        else{
            ans.push_back(brr[j++]);
        }
    }
    while(i<arr.size()){
        ans.push_back(arr[i++]);
    }
    while(j<brr.size()){
        ans.push_back(brr[j++]);
    }
    return ans;
}
vector<int>merge_k(vector<vector<int>>arr,int k){
    vector<int>ans;
    vector<int>temp=arr[0];
    for(int i=1;i<k;i++){
        ans=merge_two(temp,arr[i]);
        temp=ans;
    }
    return ans;
}
void print_all(vector<vector<int>>arr){
    cout<<"The arrays to be merged are "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<"{";
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"}";
        cout<<endl;
    }
}
int main(){
    int n,k;
    cout<<"Enter the numbers of array to be merged "<<endl;
    cin>>k;
    cout<<"Enter the size of each array "<<endl;
    cin>>n;
    vector<vector<int>>arr(k);
    cout<<"Enter the elements into each array "<<endl;
    int ele;
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            cin>>ele;
            arr[i].push_back(ele);
        }
    }
    print_all(arr);
    vector<int>merged=merge_k(arr,k);
    cout<<"Array formed after merging all the arrays is "<<endl;
    cout<<"{";
    for(int i=0;i<merged.size();i++){
        cout<<merged[i]<<" ";
    }
    cout<<"}"<<endl;
    return 0;
}
