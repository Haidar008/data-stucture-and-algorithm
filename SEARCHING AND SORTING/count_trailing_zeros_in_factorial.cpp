#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count_trailing_zeros(int n){
    int count=0;
    int denominator=5;
    while(n/denominator>=1){
        count+=(n/denominator);
        denominator*=5;
    }
    return count;
}
int main(){
    int n=31;
    int ans=count_trailing_zeros(n);
    cout<<ans<<endl;
    return 0;
}