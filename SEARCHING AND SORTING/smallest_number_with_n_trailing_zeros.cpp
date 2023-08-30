#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool is_possible(int n,int mid){
    int count=0;
    int denominator=5;
    while(mid/denominator>=1){
        count+=mid/denominator;
        denominator*=5;
    }
    return (count==n);
}
int minimum_nnumber(int n){
    if(n==1) return 5;
    int low=0;
    int high=5*n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(is_possible(n,mid)){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}
int main(){
    int n=12;
    int ans=minimum_nnumber(n);
    cout<<ans;
    return 0;
}