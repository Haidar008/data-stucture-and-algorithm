#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ispallindrome(string str){
    string ptr=str;
    reverse(ptr.begin(),ptr.end());
    if(ptr==str) return true;
    else return false;
}
int main(){
    string str;
    cout<<"Enter the string "<<endl;
    cin>>str;
    bool ans=ispallindrome(str);
    if(ans) cout<<"string is pallindrome"<<endl;
    else cout<<"string is not pallindrome"<<endl;
    return 0;
}