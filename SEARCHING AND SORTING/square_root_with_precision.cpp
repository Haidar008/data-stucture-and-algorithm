#include<iostream>
#include<bits/stdc++.h>
double precised_ans(int n,int ans,int precision){
    double factor=1;
    double precised_ans=ans;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            precised_ans=j;
        }
    }
    return precised_ans;
}
double square_root(int n){
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
    double final_ans=precised_ans(n,ans,3);
    return final_ans;
}
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<square_root(n);
    return 0;
}