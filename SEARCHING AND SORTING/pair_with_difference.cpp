#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool pair_diff(int arr[],int n,int k){
    sort(arr,arr+n);
    int i=0;
    int j=i+1;
    while(i<n&&j<n){
        if(arr[j]-arr[i]==k) return true;
        else if(arr[j]-arr[i]<k) j++;
        else i++;
    }
    return false;
}
int main(){
    int arr[6]={5,20,3,80,2,5};
    int n=6;
    int diff=78;
    bool ans=pair_diff(arr,n,diff);
    cout<<ans<<endl;
    return 0;
}