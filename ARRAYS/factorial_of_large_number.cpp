#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>factorial(int n){
    vector<int>v;
    int carry=0;
    v.push_back(1);
    for(int i=2;i<=n;i++){
        for(int j=v.size()-1;j>=0;j--){
            int val=v[j]*i+carry;
            v[j]=val%10;
            carry=val/10;
        }
        reverse(v.begin(),v.end());
        while(carry!=0){
            v.push_back(carry%10);
            carry=carry/10;
        }
        reverse(v.begin(),v.end());
    }
    return v;
}
void print(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}
int main(){
     vector<int>ans=factorial(8);
     print(ans);
     return 0;
}