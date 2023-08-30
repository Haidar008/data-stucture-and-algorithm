#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int iterative(int n){
    int a=1;
    while(a<=n){
        a=a*2;
    }
    return a/2;
}
int solve(int a,int n){
    if(a>n){
        return a/2;
    }
    return solve(a*2,n);
}
int recursive(int n){
    return solve(2,n);
    
}
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    int ans1=iterative(n);
    int ans2=recursive(n);
    cout<<ans1<<endl;
    cout<<ans2<<endl;
    return 0;
}