#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count(int n){
    int count=0;
    int max_count=0;
    while(n){
        if(n&1!=0){
            count++;
        }
        else{
            count=0;
        }
        max_count=max(count,max_count);
        n=n/2;
    }
    return max_count;
}
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<count(n);
    return 0;
}