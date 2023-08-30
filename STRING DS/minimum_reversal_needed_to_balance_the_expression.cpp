#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count_reversal(string exp){
    int n=exp.length();
    int lb=0;
    int rb=0;
    for(int i=0;i<n;i++){
        if(exp[i]=='{'){
            lb++;
        }
        else{
            if(lb==0){
                rb++;
            }
            else{
                lb--;
            }
        }
    }
    if(lb%2!=0) lb=lb/2+1;
    else lb=lb/2;
    if(rb%2!=0) rb=rb/2+1;
    else rb=rb/2;
    return lb+rb;
}
int main(){
    string exp;
    cout<<"Enter the expression "<<endl;
    cin>>exp;
    int ans=count_reversal(exp);
    cout<<ans<<endl;
    return 0;
}