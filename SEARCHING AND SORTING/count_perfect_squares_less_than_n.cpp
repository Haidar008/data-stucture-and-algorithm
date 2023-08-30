#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count_squares(int n){
    int ans=0;
    for(int i=1;i*i<n;i++){
        ans++;
    }
    return ans;
}
int main(){
    int n=9;
    cout<<count_squares(n);
    return 0;
}