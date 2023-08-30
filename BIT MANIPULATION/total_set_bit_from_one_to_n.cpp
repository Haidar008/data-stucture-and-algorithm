#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int largest_power(int n){
        int x=0;
        while((1<<x)<=n){
            x++;
        }
            return x-1;
        
    }
int countSetBits(int n)
    {
        if(n<=1) return n;
        int x=largest_power(n);
        int one=pow(2,x-1)*x;
        int two=n-pow(2,x)+1;
        return one+two+countSetBits(n-pow(2,x));
        
    }
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int ans=countSetBits(n);
    cout<<ans;
    return 0;
}