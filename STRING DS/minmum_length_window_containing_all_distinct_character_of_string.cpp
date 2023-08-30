#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int min_length(string str){
    int n=str.length();
    unordered_map<char,int>mp1,mp2;
    for(int i=0;i<n;i++){
        mp1[str[i]]++;
    }
    int ans=INT_MAX;
    int i=0;
    int j=0;
    while(j<n){
        mp2[str[j]]++;
        while(mp1.size()==mp2.size()){
            ans=min(ans,j-i+1);
            mp2[str[i]]--;
            if(mp2[str[i]]==0){
                mp2.erase(str[i]);
            }
            i++;
        }
        j++;
    }
    return ans;
}
int main(){
    string str;
    cout<<"Enter the string "<<endl;
    cin>>str;
    int ans=min_length(str);
    cout<<ans<<endl;
    return 0;
}