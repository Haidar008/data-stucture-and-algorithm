#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7]={1,2,3,2,3,1,3};
    int n=7;
    int ans=0;
    for(int i=0;i<n;i++){
       ans=ans^arr[i];
    }
    cout<<ans;
}