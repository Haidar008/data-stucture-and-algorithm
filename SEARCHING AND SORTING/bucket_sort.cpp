#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bucket_sort(double arr[],int n){
  vector<double>bkt[n];
    for(int i=0;i<n;i++){
        int index=arr[i]*10;
        bkt[index].push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        sort(bkt[i].begin(),bkt[i].end());
    }
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<bkt[i].size();j++){
            arr[k++]=bkt[i][j];
        }
    }
}
void print(double arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    double arr[]={0.7,0.6,0.8,0.765,0.89,0.23,0.12,0.56,0.34,0.90,0.95,0.99,0.54};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    bucket_sort(arr,n);
    print(arr,n);
    return 0;
}