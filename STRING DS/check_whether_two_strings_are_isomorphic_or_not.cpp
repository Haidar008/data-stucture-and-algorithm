#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isomorphic(string str1,string str2){
    int n1=str1.length();
    int n2=str2.length();
    if(n1!=n2) return false;
    unordered_map<char,char>mp1;
    unordered_map<char,bool>mp2;
    for(int i=0;i<n1;i++){
        char ch1=str1[i];
        char ch2=str2[i];
        if(mp1.find(ch1)!=mp1.end()){
            if(mp1[ch1]!=ch2) return false;
        }
        else{
            if(mp2.find(ch2)!=mp2.end()) return false;
            else{
                mp1[ch1]=ch2;
                mp2[ch2]=true;
            }
        }
    }
    return true;
}
int main(){
    string str1,str2;
    cout<<"Enter the two string "<<endl;
    cin>>str1>>str2;
    bool ans=isomorphic(str1,str2);
    if(ans){
        cout<<"The strings are isomorphic "<<endl;
    }
    else{
        cout<<"The strings are not isomorphic "<<endl;
    }
    return 0;
}