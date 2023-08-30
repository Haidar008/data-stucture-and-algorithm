#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print_pairs(int arr[],int n){
    vector<int>v;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i]*-1)!=mp.end()){
            v.push_back(-1*abs(arr[i]));
            v.push_back(abs(arr[i]));
        }
        mp[arr[i]]++;
    }
    int m=v.size();
    for(int j=0;j<m;j++){
        cout<<v[j]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements into the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print_pairs(arr,n);
    return 0;
}