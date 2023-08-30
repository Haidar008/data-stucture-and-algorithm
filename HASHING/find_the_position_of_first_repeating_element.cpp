#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int first_repeating(int arr[],int n){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[arr[i]]>1){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements into array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index=first_repeating(arr,n);
    cout<<index<<endl;
    return 0;
}