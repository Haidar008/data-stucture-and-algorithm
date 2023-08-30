#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isoperator(char a){
    return(a=='+'||a=='-'||a=='/'||a=='*'||a=='^');
}
bool check_redundancy(string str){
    stack<char>s;
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]==')'){
            bool flag=true;
            while(!s.empty()&&s.top()!='('){
                if(isoperator(s.top())){
                    flag=false;
                }
                s.pop();
            }
            if(!s.empty()) s.pop();
            if(flag==true) return true;
        }
        else{
            s.push(str[i]);
        }
    }
    return false;
}
int main(){
    string str="(a+(b+c)/c)";
    bool ans=check_redundancy(str);
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}