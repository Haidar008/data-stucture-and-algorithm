#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int index,vector<string>&ans,string str){
    if(index==str.length()){
        ans.push_back(str);
        return;
    }
    for(int i=index;i<str.length();i++){
        swap(str[index],str[i]);
        solve(index+1,ans,str);
        swap(str[index],str[i]);
    }
}
vector<string>permutation(string str){
    vector<string>ans;
    solve(0,ans,str);
    return ans;
}
void print_permutation(vector<string>ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}
int main(){
    string str;
    cout<<"Enter the string "<<endl;
    cin>>str;
    vector<string>ans=permutation(str);
    print_permutation(ans);
    return 0;
}