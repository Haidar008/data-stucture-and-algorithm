#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<string>>anagram_together(vector<string>&arr){
    int n=arr.size();
    vector<vector<string>>result;
    unordered_map<string,vector<string>>mp;
    for(int i=0;i<n;i++){
        string str=arr[i];
        sort(str.begin(),str.end());
        mp[str].push_back(arr[i]);
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        result.push_back(it->second);
    }
    return result;
}
int main(){
    vector<string>arr={"cat","god","act","dog","tab","tac","bat"};
    vector<vector<string>>ans=anagram_together(arr);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}