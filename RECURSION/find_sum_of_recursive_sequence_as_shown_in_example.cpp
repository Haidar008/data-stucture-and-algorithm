//example:
//N=5
//op=1+(2*3)+(4*5*6)+(7*8*9*10)+(11*12*13*14*15)=365227
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long iterative(int n){
    long long ans=0;
    long long k=1;
    for(int i=1;i<=n;i++){
        long long b=1;
        for(int j=1;j<=i;j++){
            b=b*k++;
        }
        ans+=b;
    }
    return ans;
}
long long solve(int i,long long k,long long ans,int n){
    if(i>n) return 0;
    long long b=1;
    for(int j=1;j<=i;j++){
        b=b*k++;
    }
    ans=b;
    return ans+solve(i+1,k,ans,n);
}
long long recursive(int n){
     return solve(1,1,0,n);
}
int main(){
    int n;
    cout<<"Enter the value of n" <<endl;
    cin>>n;
    long long ans1=iterative(n);
    long long ans2=recursive(n);
    cout<<ans1<<endl;
    cout<<ans2<<endl;
    return 0;
}