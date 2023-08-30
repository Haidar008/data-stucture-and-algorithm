#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int i,vector<int>&arr,int k){
    if(arr.size()==1) return;
    i=(i+k-1)%arr.size();
    arr.erase(arr.begin()+i);
    solve(i,arr,k);
}
int find_winner(int n,int k){
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    solve(0,arr,k);
    return arr[0];
}
int main(){
    int n;
    cout<<"Enter the number of people "<<endl;
    cin>>n;
    int k;
    cout<<"Enter the value of k "<<endl;
    cin>>k;
    int winner=find_winner(n,k);
    cout<<winner<<endl;
    return 0;
}