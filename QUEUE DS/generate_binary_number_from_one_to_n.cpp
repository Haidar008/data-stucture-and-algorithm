#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<string>generate_binary(int n){
    vector<string>ans;
    queue<string>q;
    q.push("1");
    for(int i=1;i<=n;i++){
        string temp=q.front();
        ans.push_back(temp);
        q.pop();
        q.push(temp+"0");
        q.push(temp+"1");
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the value of "<<endl;
    cin>>n;
    vector<string>ans=generate_binary(n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}