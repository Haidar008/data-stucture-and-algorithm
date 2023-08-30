#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print_duplicates(string str){
    int n=str.length();
    unordered_map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[str[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[str[i]]>1){
            cout<<str[i]<<",";
        }
        mp.erase(str[i]);
    }
}
int main(){
    string str;
    cout<<"enter the string "<<endl;
    cin>>str;
    print_duplicates(str);
    return 0;
}