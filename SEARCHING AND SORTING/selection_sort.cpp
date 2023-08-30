#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_ind=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_ind]){
                min_ind=j;
            }
        }
        if(i!=min_ind){
            swap(arr[i],arr[min_ind]);
        }
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,4,3,6,4,7,58,78,98,76,5,54,3,3,2,4,55,6,7,6,5,4,4,6,8,7,6,6,5,5,5,67,88,8,8,7,6,6,55,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    selection_sort(arr,n);
    print(arr,n);
    return 0;
}