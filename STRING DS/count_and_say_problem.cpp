#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string count_say(int n){
    if(n==1) return "1";
    if(n==2) return "11";
    string str="11";
    for(int i=3;i<=n;i++){
        str+="#";
        int l=str.length();
        string temp="";
        int count=1;
        for(int j=1;j<l;j++){
            if(str[j]==str[j-1]){
                count++;
            }
            else{
                temp+=to_string(count);
                temp+=str[j-1];
                count=1;
            }
        }
        str=temp;
    }
    return str;
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    string ans=count_say(n);
    for(int i=0;i<ans.length();i++){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}