#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key) return i;
    }
    return -1;
}
int main(){
    int arr[]={1,2,4,56,7,6,454,333,67,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<linear_search(arr,n,333);
    return 0;
}