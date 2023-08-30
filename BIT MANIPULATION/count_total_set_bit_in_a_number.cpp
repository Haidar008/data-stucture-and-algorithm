#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count(int n){
    int RMSB;
    int count=0;
    while(n!=0){
        count++;
        RMSB=n&(~n+1);
        n=n-RMSB;
    }
    return count;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<count(n);
    return 0;
}