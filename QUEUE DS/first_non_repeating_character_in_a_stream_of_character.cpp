#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string solve(string str){
    string ans="";
    queue<char>q;
    unordered_map<char,int>mp;
    for(int i=0;i<str.length();i++){
        if(mp.find(str[i])==mp.end()){
            q.push(str[i]);
        }
        mp[str[i]]++;
        while(!q.empty()&&mp[q.front()]>1){
            q.pop();
        }
        if(q.empty()) ans+='#';
        else ans+=q.front();
    }
    return ans;
}
int main(){
    string str;
    cout<<"Enter the string "<<endl;
    cin>>str;
    string ans=solve(str);
    cout<<ans<<endl;
    return 0;
}