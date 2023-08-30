#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sort(int arr[],int n){
    sort(arr,arr+n);
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,4,56,7,6,454,333,67,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    sort(arr,n);
    print(arr,n);
    return 0;
}