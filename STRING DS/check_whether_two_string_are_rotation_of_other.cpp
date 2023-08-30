#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isrotation(string str,string ptr){
    queue<char>q1,q2;
    if(str.length()!=ptr.length()) return false;
    for(int i=0;i<str.length();i++){
        q1.push(str[i]);
    }
    for(int i=0;i<ptr.length();i++){
        q2.push(ptr[i]);
    }
    int k=q1.size();
    while(k--){
        char ch=q1.front();
        q1.pop();
        q1.push(ch);
        if(q1==q2) return true;
    }
    return false;
}
int main(){
    string str,ptr;
    cout<<"Enter the two string "<<endl;
    cin>>str>>ptr;
    if(isrotation(str,ptr)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}