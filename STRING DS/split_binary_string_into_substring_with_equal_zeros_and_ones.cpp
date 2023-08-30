#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int max_substr(string str){
    int n=str.length();
    int ans=0;
    int count0=0;
    int count1=0;
    for(int i=0;i<n;i++){
        if(str[i]=='0'){
            count0++;
        }
        else{
            count1++;
        }
        if(count0==count1){
            ans++;
            count0=0;
            count1=0;
        }
    }
    if(count0!=count1) return -1;
    else return ans;
}
int main(){
    string str;
    cout<<"Enter the binary string"<<endl;
    cin>>str;
    int ans=max_substr(str);
    cout<<ans<<endl;
    return 0;
}