#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(int n,int k){
    n=n>>k;
    if(n&1==1) return true;
    else return false;
}
int main(){
    int n=30;
    int k=2;
    cout<<check(n,k);
    return 0;
}