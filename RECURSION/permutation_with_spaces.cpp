#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int ind,string str,string res,vector<string>&ans){
    if(ind==str.length()-1){
        res+=str[ind];
        ans.push_back(res);
        return;
    }
    solve(ind+1,str,res+str[ind]+" ",ans);
    solve(ind+1,str,res+str[ind],ans);
}
vector<string>permutation(string str){
    vector<string>ans;
    string res="";
    solve(0,str,res,ans);
    return ans;
}
void print(vector<string>ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    string str;
    cout<<"Enter the string "<<endl;
    cin>>str;
    vector<string>ans=permutation(str);
    print(ans);
    return 0;
}