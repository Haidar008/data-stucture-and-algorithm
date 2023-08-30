#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int kth_element(int arr1[],int arr2[],int n,int m,int k){
    if(n>m){
        return kth_element(arr2,arr1,m,n,k);
    }
    int low=max(0,k-m);
    int high=min(n,k);
    while(low<=high){
        int cut1=low+(high-low)/2;
        int cut2=k-cut1;
        int l1=(cut1==0)?INT_MIN:arr1[cut1-1];
        int l2=(cut2==0)?INT_MIN:arr2[cut2-1];
        int r1=(cut1==n)?INT_MAX:arr1[cut1];
        int r2=(cut2==m)?INT_MAX:arr2[cut2];
        if(l1<=r2&&l2<=r1) return max(l1,l2);
        else if(l1>r2){
            high=cut1-1;
        }
        else{
            low=cut1+1;
        }

    }
    return -1;
}
int main(){
    int arr1[6]={1,2,3,4,5,6};
    int arr2[5]={1,4,6,8,9};
    int n=6;
    int m=5;
    cout<<kth_element(arr1,arr2,n,m,3);
    return 0;
}