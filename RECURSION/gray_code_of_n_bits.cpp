#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<string>gray_string(int n){
    if(n==1) return {"0","1"};
    vector<string>small=gray_string(n-1);
    vector<string>ans;
    for(int i=0;i<small.size();i++){
        string str=small[i];
        ans.push_back("0"+str);
    }
    for(int i=small.size()-1;i>=0;i--){
        string str=small[i];
        ans.push_back("1"+str);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number of bits "<<endl;
    cin>>n;
    vector<string>ans=gray_string(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}