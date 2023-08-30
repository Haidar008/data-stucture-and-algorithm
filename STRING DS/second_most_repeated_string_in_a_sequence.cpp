#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string second_most_repeated(string arr[],int n){
    unordered_map<string,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int first=INT_MIN,sec=INT_MIN;
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second>first){
            sec=first;
            first=it->second;
        }
       else if((it->second!=first)&&(it->second>sec)){
        sec=it->second;
       }
    }
    unordered_map<string,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second==sec){
            break;
        }
    }
    return it->first;
}
int main(){
    string arr[6];
    cout<<"enter the elements in the string "<<endl;
    string str;
    for(int i=0;i<6;i++){
        cin>>str;
    }
    string ans=second_most_repeated(arr,6);
    cout<<ans<<endl;
    return 0;
}