#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ispallindrome(string str){
    int n=str.length();
   for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]){
            return false;
        }
   }
   return true;
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