#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int value(char ch){
    if(ch=='I') return 1;
    if(ch=='V') return 5;
    if(ch=='X') return 10;
    if(ch=='L') return 50;
    if(ch=='C') return 100;
    if(ch=='D') return 500;
    if(ch=='M') return 1000;
    return -1;
}
int decimal(string str){
    int n=str.length(),i;
    int ans=0;
    for(i=0;i<n-1;i++){
        int s1=value(str[i]);
        int s2=value(str[i+1]);
        if(s1<s2){
            ans+=(s2-s1);
            i++;
        }
        else{
            ans+=s1;
        }
    }
    if(i<n){
        ans+=value(str[i]);
    }
    return ans;
}
int main(){
    string str;
    cout<<"enter the roman number "<<endl;
    cin>>str;
    int dec=decimal(str);
    cout<<"the number is "<<dec<<endl;
    return 0;
}