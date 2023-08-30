#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int kth_element(int arr[],int brr[],int n,int m,int k){
    int count=0;
    int i=0;
    int j=0; 
    while(i<n&&j<m){
        if(arr[i]<=brr[j]){
            count++;
            if(k==count){
                return arr[i];
            }
            i++;
        }
        else{
            count++;
            if(k==count){
                return arr[j];
            }
            j++;
        }
    }
    while(i<n){
            count++;
            if(k==count){
                return brr[i];
            }
            i++;
    }
    while(j<m){
             count++;
            if(k==count){
                return brr[j];
            }
            j++;
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={1,4,6,8,9};
    int n=6;
    int m=5;
    cout<<kth_element(arr,brr,n,m,9);
    return 0;
}