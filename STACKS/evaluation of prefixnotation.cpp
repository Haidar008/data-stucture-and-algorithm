#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int evaluate_prefix(string str){
    stack<int>st;
    int n=str.length();
    for(int i=n-1;i>=0;i--){
        if(isdigit(str[i])){
            st.push(str[i]-'0');
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            switch(str[i]){
                case '+':st.push(op1+op2);
                         break;
                case '-':st.push(op1-op2);
                         break;
                case '*':st.push(op1*op2);
                         break;
                case '/':st.push(op1/op2);
                         break;
            }
        }
    }
    return st.top();
}
int main(){
    string expression="+9*26";
    int ans=evaluate_prefix(expression);
    cout<<"The evaluated prefix notation is "<<ans<<endl;
}