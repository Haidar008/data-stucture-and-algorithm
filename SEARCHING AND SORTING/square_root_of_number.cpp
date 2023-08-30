#include<iostream>
#include<bits/stdc++.h>
int square_root(int n){
    int ans=0;
    int low=0;
    int high=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        int msq=mid*mid;
        if(msq==n) return mid;
        else if(msq<n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<square_root(n);
    return 0;
}