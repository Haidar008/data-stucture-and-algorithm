#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void product_array(int arr[],int n){
    int left[n];
    int right[n];
    int product[n];
    int pro=1;
    for(int i=0;i<n;i++){
        pro*=arr[i];
        left[i]=pro;
        
    }
    pro=1;
    for(int i=n-1;i>=0;i--){
        pro*=arr[i];
        right[i]=pro;   
    }
    product[0]=right[1];
    product[n-1]=left[n-2];
    for(int i=1;i<n-1;i++){
        product[i]=left[i-1]*right[i+1];
    }
    for(int i=0;i<n;i++){
        cout<<product[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[4]={1,2,3,4};
    int n=4;
    product_array(arr,n);
    return 0;
}